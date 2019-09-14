#include<stdio.h>
#include<stdlib.h>
int cmp(const void *x, const void *y)
{
		return *(int *)y-*(int *)x;
}
int main()
{
		int number[100], i;
		while(scanf("%d", &number[i])!=EOF){
				i++;
		}
		qsort(number, i, sizeof(int), cmp);
		printf("%d\n", number[0]);
		return 0;
}
