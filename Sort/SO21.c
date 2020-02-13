#include<stdio.h>
#include<stdlib.h>
int cmp(const void *x, const void *y)
{
	return *(int *)x-*(int *)y;
}
int main()
{
	int i, a, max, flag, number[100], total=0;
	
	while(scanf("%d", &a)!=EOF){
		for(i=0; i<a; i++){
			scanf("%d", &number[i]);
		}
		max=number[0];
		flag=0;
		for(i=1; i<a; i++)
			if(max<number[i]){
				max=number[i];
				flag=i;
			}
		for(i=flag; i<a-1; i++)
			number[i]=number[i+1];
		qsort(number, a-1, sizeof(int), cmp);
		number[a-1]=max;
		total=max-number[0];
		for(i=1; i<a; i++){
			total+=number[i]-number[i-1];
		}
		printf("%d\n", total);
	}
	return 0;
}
