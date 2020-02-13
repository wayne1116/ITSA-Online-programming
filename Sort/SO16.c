#include<stdio.h>
#include<stdlib.h>
int cmp(const void *x, const void *y)
{
	return *(int *)y-*(int *)x;
}
int main()
{
	int *number1, number, local, i, j, a;
	
	while(scanf("%d", &a)!=EOF){
		for(i=0; i<a; i++){
			scanf("%d%d", &number, &local);
			number1=(int *)malloc(number*sizeof(int));
			for(j=0; j<number; j++)
				scanf("%d", &number1[j]);
			qsort(number1, number, sizeof(int), cmp);
			printf("%d\n", number1[local-1]);
		}
	}
	return 0;
}
