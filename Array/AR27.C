#include<stdio.h>
#include<stdlib.h>

int cmp(const void *x, const void *y)
{
		return *(int *)x-*(int *)y;
}
int main()
{
		int i, number[70000], a;
		while(scanf("%d", &a)!=EOF){
				for(i=0; i<a-1; i++){
						scanf("%d", &number[i]);
				}
				for(i=0; i<a-1; i++)
						printf("%d\t", number[i]);
				printf("\n");

				qsort(number, a-1, sizeof(int), cmp);
				for(i=0; i<a-1; i++)
						printf("%d\t", number[i]);
				printf("\n");
				for(i=0; i<a-1; i++)
						if(number[i]!=i+1){
								printf("%d\n", i+1);
								break;
						}
				if(i==a-1)
						printf("%d\n", i+1);
		}
		return 0;
}
