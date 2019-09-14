#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define OUT 0
#define IN  1
int main()
{
		int state=OUT, i, j, k;
		int a, n, m, count=0, min;
		int number1, number2, number[1000000];
		while(scanf("%d", &a)!=EOF){
				for(i=0; i<a; i++){
						scanf("%d%d", &n, &m);
						count=0;
						if(n==1)
								n++;
						for(j=n; j<=m; j++){
								for(k=2; k<=sqrt(j); k++){
										if(j%k==0){
												state=IN;
												break;
										}
								}
								if(state!=IN){
										number[count]=j;
										count++;
								}
								state=OUT;
						}
						if(count==0 || count==1)
								printf("Not found\n");
						else{
								min=number[1]-number[0];
								number1=number[0];
								number2=number[1];
								for(j=2; j<count; j++){
										if(min>number[j]-number[j-1]){
												min=number[j]-number[j-1];
												number1=number[j-1];
												number2=number[j];
										}
								}
								printf("%d %d\n", number1, number2);
						}
				}
		}
		return 0;
}



