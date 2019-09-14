#include<stdio.h>
#include<stdlib.h>
int cmp(const void *x, const void *y)
{
	return *(int *)x-*(int *)y;
}
int main()
{
	int i=0, j, number[1024];
	while(scanf("%d", &number[i])!=EOF){
		i++;
	}
	qsort(number, i, sizeof(int), cmp);
	for(j=0; j<i; j++)
			printf("%d ", number[j]);
	printf("\n");
	if(i%2==0){
		printf("Median=%.1f\n", (number[i/2]+number[i/2-1])/2.0);
	}
	else{
		printf("Median=%d\n", number[i/2]);
	}
	return 0;
}
