#include<stdio.h>
#include<stdlib.h>
int cmp(const void *x, const void *y)
{
		int number1=*(int *)x, number2=*(int *)y;
		while(number1!=0 && number2!=0){
				if(number1%10==number2%10){
						number1/=10;
						number2/=10;
				}
				else{
						return number1%10-number2%10;
				}
		}
		return number1%10-number2%10;
}
int main()
{
		int i, a, number[10000];
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
