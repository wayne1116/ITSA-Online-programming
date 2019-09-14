#include<stdio.h>
#include<stdlib.h>
int main()
{
		long *number=calloc(102, sizeof(long));
		int i, a;
		number[1]=1; number[2]=3;
		for(i=3; i<=101; i++)
				number[i]=2*number[i-2]+3;
		while(scanf("%d", &a)!=EOF)
				printf("%ld\n", number[a]);
		free(number);
		return 0;
}
