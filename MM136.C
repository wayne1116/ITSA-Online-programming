#include<stdio.h>
#include<stdlib.h>
int main()
{
		int number, base, i, j, result[100000];
		while(scanf("%d %d", &number, &base)!=EOF){
				while(number>0){
						result[i++]=number%base;
						number/=base;
				}
				for(j=i-1; j>=0; j--)
						printf("%d", result[j]);
				printf("\n");
		}
		return 0;
}
