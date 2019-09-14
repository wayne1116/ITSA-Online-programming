#include<stdio.h>
#include<stdlib.h>
int cmp(const void *x, const void *y)
{
		return *(int *)x-*(int *)y;
}
int main()
{
		int a=0, i=0, total=0, number[1024], Result=0;
		while(scanf("%d", &a)!=EOF){
				for(i=0; i<a; i++)
						scanf("%d", &number[i]);
				qsort(number,a,sizeof(int),cmp);
				total=0;
				Result=0;
				for(i=0; i<a; i++){
						total+=number[i];
						Result+=total;
						total+=number[i];
				}
				printf("%d\n", Result);
		}
		return 0;
}
