#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *result, a, i, temp=1, total=0;
	result=(int *)malloc(1000000*sizeof(int));
	for(i=1; i<=1000000; i++){
		temp*=i;
		total+=temp;
		total=total%100000;
		result[i-1]=total;
		temp=temp%100000;
	}
	scanf("%d", &a);
	printf("%d\n", result[a-1]);
	free(result);
	return 0;
}
