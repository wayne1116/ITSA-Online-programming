#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int cmp(const void *x, const void *y)
{
		return *(int *)x-*(int *)y;
}
int CMP(const void *x, const void *y)
{
		return *(int *)y-*(int *)x;
}
int main()
{
		char line[1024], *ptr;
		int number[1024], count=0, i, a, flag;
		while(scanf("%s", line)!=EOF){
				ptr=line;
				if(strcmp(line, "-a")==0){
						qsort(number, count, sizeof(int), cmp);
						printf("Array = ");
						for(i=0; i<count-1; i++)
								printf("%d ", number[i]);
						printf("%d\n", number[i]);
						while(scanf("%d", &a)!=EOF){
								printf("N = %d, Array = ", a);
								flag=count/a;
								for(i=0; i<flag-1; i++)
										printf("%d ", number[i]);
								printf("%d\n", number[i]);
						}
						count=0;
				}
				else if(strcmp(line, "-d")==0){
						qsort(number, count, sizeof(int), CMP);
						printf("Array = ");
						for(i=0; i<count-1; i++)
								printf("%d ", number[i]);
						printf("%d\n", number[i]);
						while(scanf("%d", &a)!=EOF){
								printf("N = %d, Array = ", a);
								flag=count/a;
								for(i=0; i<flag-1; i++)
										printf("%d ", number[i]);
								printf("%d\n", number[i]);
						}
						count=0;
				}
				else
						number[count++]=atoi(ptr);
		}
		return 0;
}
