#include<stdio.h>
#include<stdlib.h>
int main()
{
		int i=0, result=0;
		double a=0;
		int value[]={10000,5000,2000,1000,500,100,50,10,5,1};
		int coin[10];
		while(scanf("%lf", &a)!=EOF){
				for(i=0; i<10; i++)
						coin[i]=0;
				a=a*3.7119;
				result=a;
				for(i=0; i<10; i++){
						if(result/value[i]!=0){
								coin[i]=result/value[i];
								result%=value[i];
						}
				}

				for(i=9; i>0; i--)
						printf("%d ", coin[i]);
				printf("%d\n", coin[i]);
		}
		return 0;
}
