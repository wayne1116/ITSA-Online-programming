#include<stdio.h>
#include<stdlib.h>
int cmp(const void *x, const void *y)
{
	return *(int *)x-*(int *)y;
}
int main()
{
	int number, count, i, k, array[100000];
	
	while(scanf("%d", &number)!=EOF){
		for(k=0; k<number; k++){
			scanf("%d", &count);
			for(i=0; i<count+count; i++)
				scanf("%d", &array[i]);
			qsort(array, i, sizeof(int), cmp);
			printf("%d\n", array[count-1]);
		}
	}
	return 0;
}
