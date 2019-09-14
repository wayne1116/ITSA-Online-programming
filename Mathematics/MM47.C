#include<stdio.h>
#include<stdlib.h>
int main()
{
		int a, b, c, d, e, f; 
		while(scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f)!=EOF)
				printf("%d\n", a*b+c*d+e*f);
		return 0;
}

