#include<stdio.h>
#include<stdlib.h>
int main()
{
		int a, b, i, j, k, count;
		while(scanf("%d %d", &a, &b)!=EOF){
				if(a==0 || b==0)
						return 0;
				for(i=0, j=0; i<b/2; i++, j++){
						count=j;
						while(count<b/2){
								if(a==1)
										printf(" ");
								else if(a==2)
										printf("*");
								count++;
						}
						for(k=0; k<2*j+1; k++){
								if(a==1)
										printf("*");
								else if(a==2)
										printf(" ");
						}
						count=j;
						while(count<b/2){
								if(a==1)
										printf(" ");
								else if(a==2)
										printf("*");
								count++;
						}
						printf("\n");
				}
				for(i=0; i<b; i++){
						if(a==1)
								printf("*");
						else if(a==2)
								printf(" ");
				}
				printf("\n");
				for(i=0, j=b/2-1; i<b/2; i++, j--){
						count=j;
						while(count<b/2){
								if(a==1)
										printf(" ");
								else if(a==2)
										printf("*");
								count++;
						}
						for(k=0; k<2*j+1; k++){
								if(a==1)
										printf("*");
								else if(a==2)
										printf(" ");

						}
						count=j;
						while(count<b/2){
								if(a==1)
										printf(" ");
								else if(a==2)
										printf("*");
								count++;
						}
						printf("\n");
				}
				printf("\n");
		}
		return 0;
}
