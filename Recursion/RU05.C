#include<stdio.h>
#include<stdlib.h>
int cmp(const void *x, const void *y)
{
		return *(int *)x-*(int *)y;
}
int main()
{
		int number[50], temp1, temp2, temp3;
		int i, j, k, a;
		while(scanf("%d", &a)!=EOF){
				for(i=0; i<a; i++)
						scanf("%d", &number[i]);
				qsort(number, a, sizeof(int), cmp);
				for(i=0; i<a-2; i++){
						temp1=number[i];
						for(j=i+1; j<a-1; j++){
								temp2=number[j];
								for(k=j+1; k<a; k++){
										temp3=number[k];
										if((temp1+temp2>temp3) && (temp1+temp3>temp2) && (temp2+temp3>temp1))
												printf("%d %d %d\n", temp1, temp2, temp3);
								}
						}
				}
		}
		return 0;
}
