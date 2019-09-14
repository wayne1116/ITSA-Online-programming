#include<stdio.h>
#include<stdlib.h>
int main()
{
		int i, a, count;
		while(scanf("%d", &a)!=EOF){
				for(i=2; i<=a; i++){
						if(a%i==0){
								count=0;
								while(a%i==0){
										a/=i;
										count++;
								}
								if(a>1)
										printf("%d^%d x ", i, count);
								else
										printf("%d^%d", i, count);
						}
				}
				printf("\n");
		}
		return 0;
}
