#include<stdio.h>  
#include<stdlib.h>  
#include<limits.h>
int main()  
{  
	double max=LLONG_MAX;  
	double number[1001][8];  
	int i, j, k, l;  
	double result=0;  
	int index1=0, index2=0;  
	int a=0, b=0;  
	int min=0,min1=0;  
	while(scanf("%d%d", &a,&b)!=EOF){  
		for(i=0; i<a; i++){  
			for(j=0; j<b; j++){  
				scanf("%lf", &number[i][j]);  
			}  
		}  
		for(i=0; i<a; i++){  
			for(j=i+1; j<a; j++){  
				result=0;  
				for(k=0; k<b; k++)  
					result+=(number[i][k]-number[j][k])*(number[i][k]-number[j][k]);
				if(max>result){  
					max=result;  
					index1=i;  
					index2=j;  
					for(l=0; l<b; l++){  
						if(number[i][l]>number[j][l]){
							index1=j;  
							index2=i;  
							break;
						}  
						else if(number[i][l]<number[j][l]) break;
					}  
				}  
				else if(max==result){
					min=i; min1=j;  
					for(l=0; l<b; l++){
						if(number[i][l]>number[j][l]){ 
							min=j; min1=i; 
							break;
						} 
						else if(number[i][l]<number[j][l]) break;
					}
					for(l=0; l<b; l++){  
						if(number[index1][l]>number[min][l]){  
							index1=min;  
							index2=min1;
							break;  
						} 
					        else if(number[index1][l]<number[min][l]) break;
					}  
				}  
			}  
		} 
		for(i=0; i<b-1; i++)  
			printf("%d ", (int)number[index1][i]);  
		printf("%d\n", (int)number[index1][i]);  

		for(i=0; i<b-1; i++)  
			printf("%d ", (int)number[index2][i]);  
		printf("%d\n", (int)number[index2][i]);  
	}  
	return 0;  
}  

