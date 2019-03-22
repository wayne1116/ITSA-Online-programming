#include<stdio.h>
#include<stdlib.h>
int main()
{
		int number[36]={0}, i, a;
		number[0]=1; number[1]=2; number[2]=4;
		for(i=3; i<=36; i++)
				number[i]=number[i-1]+number[i-2]+number[i-3];
		while(scanf("%d", &a)!=EOF){
				printf("%d\n", number[a]);
		}
		return 0;
}
