#include<stdio.h>
#include<stdlib.h>
int cmp(const void *x, const void *y)
{
		return *(int *)x-*(int *)y;
}
int main()
{
		int i, a, number[10000], peo;
		while(scanf("%d", &a)!=EOF){
				for(i=0; i<a; i++)
						scanf("%d", &number[i]);
				qsort(number, a, sizeof(int), cmp);
				peo=a/4;
				printf("%d %d %d\n", number[peo-1], number[2*peo-1], number[3*peo-1]);
		}
		return 0;
}
