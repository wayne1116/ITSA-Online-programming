#include<stdio.h>
#include<stdlib.h>
int main()
{
		int i, result, a, b, c, d, range1, range2;
		scanf("%d %d %d %d", &a, &b, &c, &d);
		scanf("%d %d", &range1, &range2);
		for(i=range1, result=0; i<=range2; i++)
				result+=(i*i*b+c*i+d);
		printf("%d\n", result);
		return 0;
}
