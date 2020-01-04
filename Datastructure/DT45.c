#include<stdio.h>
#include<stdlib.h>
int cmp(const void *x, const void *y)
{
	return *(int *)x-*(int *)y;
}
int main()
{
	int a, i, number[1024];
	while(scanf("%d", &a)!=EOF){
		for(i=0; i<a; i++)
			scanf("%d", &number[i]);
		qsort(number, a, sizeof(int), cmp);
		for(i=0; i<a-1; i++)
			printf("%d ", number[i]);
		printf("%d\n", number[i]);
	}
	return 0;
}
