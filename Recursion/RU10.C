#include<stdio.h>  
#include<stdlib.h>
int main()  
{  
	int a, i, j, k, b, c ,d, max, result[128], result1, number[128][128], pro, pro1, state, front, rear, temp[4096];  
	char com[10];  
	scanf("%d", &a); 
		for(i=0; i<a; i++){  
			scanf("%d", &b);  
			for(j=0; j<b; j++){  
				scanf("%s", com);  
				if(com[0]=='V'){  
					scanf("%d", &number[j][0]);  
				}  
				else{
					number[j][0]=-1;  
					scanf("%d", &c);
					number[j][1]=c;    
					for(k=0; k<c; k++){
						scanf("%d", &number[j][k+2]);
					}
				}  
			}
			front=rear=0;
			for(j=0; j<b; j++){
				if(number[j][0]!=-1){
					result[j]=number[j][0];
				}
				else{
					result[j]=-1;
					temp[rear++]=j;
				}
			}
			while(front!=rear){
				pro=temp[front++]; result1=0; state=1;
				for(j=0; j<number[pro][1]; j++){
					pro1=number[pro][j+2]-1;
					if(result[pro1]==-1){
						temp[rear++]=pro;
						state=0;
						break;
					}
					result1=(result1+result[pro1])%100000;
				}
				if(state)
				    result[pro]=result1;
			}
			max=result[0];  
			for(j=1; j<b; j++){  
				if(max<result[j]){  
					max=result[j];  
				}  
			}  
			printf("%d\n", max);  
		}    
	return 0;  
}  
