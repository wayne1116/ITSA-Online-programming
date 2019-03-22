#include<stdio.h>
#include<stdlib.h>
#define MAX 10000
int cmp(const void *x, const void *y)
{
		return *(int *)y-*(int *)x;
}
int main()
{
		int a, number1[MAX], number2[MAX], i, j, count=0;
		while(scanf("%d", &a)!=EOF){
				if(a==0)
						break;
				for(i=0; i<a; i++)
						scanf("%d", &number1[i]);
				for(i=0; i<a; i++)
						scanf("%d", &number2[i]);
				qsort(number1, a, sizeof(int), cmp);
				qsort(number2, a, sizeof(int), cmp);

				for(i=0, j=0; i<a;){
						if(number1[i]<number2[j]){
								count++;
								i++;
								j++;
						}
						else if(number1[i]>=number2[j]){
								i++;
						}
				}
				printf("%d\n", count);
				count=0;
		}
		return 0;
}

