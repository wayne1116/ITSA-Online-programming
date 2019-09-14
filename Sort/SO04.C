#include<stdio.h>
#include<stdlib.h>
int cmp(const void *x, const void *y)
{
		return *(int *)x-*(int *)y;
}
int main()
{
		long int a, i, j, number, left, right, middle;
		long int total;
		int f[50001], g[50001];
		while(scanf("%ld", &a)!=EOF){
				for(i=0; i<a; i++){
						scanf("%ld", &number);
						for(j=0; j<number; j++)
								scanf("%d", &f[j]);
						for(j=0; j<number; j++)
								scanf("%d", &g[j]);
						qsort(f, number, sizeof(int), cmp);
						qsort(g, number, sizeof(int), cmp);

						total=0;
						for(j=0; j<number; j++){
								left=0; right=number-1;
								while(left<=right){
										middle=(left+right)/2;
										if(f[j]>g[middle])
												left=middle+1;
										else
												right=middle-1;
								}
								//printf("left:%d\tright:%d\n", left, right);
								total+=left;
						}
						printf("%ld\n", total);
				}
		}
		return 0;
}
