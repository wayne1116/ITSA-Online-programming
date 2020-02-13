#include<stdio.h>
#include<stdlib.h>
int cmp(const void *x, const void *y)
{
	return *(int *)x-*(int *)y;
}
int main()
{
	int a, i, j, b;
	int number[128], total=0;
	
	while(scanf("%d", &a)!=EOF){
		for(i=0; i<a; i++){
			scanf("%d", &b);
			for(j=0; j<b; j++)
				scanf("%d", &number[j]);
			qsort(number, b, sizeof(int), cmp);
			total=0;
			for(j=0; j<b-1; j++){
				total+=number[j];
				number[j+1]+=number[j];
			}
			printf("%d\n", total);
		}
	}
	return 0;
}
