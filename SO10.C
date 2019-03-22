#include<stdio.h>
#include<stdlib.h>
int cmp(const void *x, const void *y)
{
		return *(int *)x-*(int *)y;
}
int main()
{
		int number[1024], i=0, j=0;
		while(scanf("%d", &number[i])!=EOF){
				i++;
		}
		qsort(number, i, sizeof(int), cmp);
		for(j=0; j<i; j++)
				printf("%d\n", number[j]);
		return 0;
}
