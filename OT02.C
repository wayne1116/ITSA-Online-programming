#include<stdio.h>
#include<stdlib.h>
#define MAX 1000000
int cmp(const void *x, const void *y)
{
		return *(int *)x-*(int *)y;
}
int main()
{
		int i=0, j, number[MAX];
		while(scanf("%d", &number[i])!=EOF){
				i++;
		}
		qsort(number, i, sizeof(int), cmp);
		for(j=0; j<i-1; j++)
				printf("%d ", number[j]);
		printf("%d\n", number[j]);
		return 0;
}
