#include<stdio.h>
#include<stdlib.h>
int cmp(const void *x, const void *y)
{
		return *(int *)x-*(int *)y;
}
int main()
{
		int number, *array, *result, i;
		while(scanf("%d", &number)!=EOF){
				array=(int *)malloc(number*sizeof(int));
				result=(int *)malloc((number-1)*sizeof(int));
				scanf("%d", &array[0]);
				for(i=1; i<number; i++){
						scanf("%d", &array[i]);
						result[i-1]=array[i]-array[i-1]>=0?array[i]-array[i-1]:array[i-1]-array[i];
				}
				qsort(result, number-1, sizeof(int), cmp);
				for(i=1; i<=number-1; i++){
						if(result[i-1]!=i){
								break;
						}
				}
				if(i>number-1)
						printf("Jolly\n");
				else
						printf("Not jolly\n");
				free(array);
				free(result);
		}
		return 0;
}
						

