#include<stdio.h>
#include<stdlib.h>
int main()
{
		int a, b, i, j, count;
		while(scanf("%d %d", &a, &b)!=EOF){
				if(a==0 || b==0)
						return 0;
				if(a==1){
						if(count!=0)
								printf("\n");
						for(i=1; i<b; i++){
								for(j=0; j<i; j++)
										printf("*");
								printf("\n");
						}
						for(i=0; i<b; i++)
								printf("*");
						printf("\n");
						for(i=b-1; i>0; i--){
								for(j=0; j<i; j++)
										printf("*");
								printf("\n");
						}
				}
				else if(a==2){
						if(count!=0)
								printf("\n");
						for(i=0; i<b; i++){
								for(j=0; j<b; j++)
										printf("*");
								printf("\n");
						}
				}
				count++;
		}
		return 0;
}								
