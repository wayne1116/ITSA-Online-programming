#include<stdio.h>
#include<stdlib.h>
#define swap(x, y, z) ((z)=(x), (x)=(y), (y)=(z))
struct node{
		int number[100];
		int flag;
};
int cmp(const void *x, const void *y)
{
		return (*(int *)x)%10-(*(int *)y)%10;
}
int main()
{
		struct node lnode[10];
		int i, j, k, l, a, b, number, temp;
		while(scanf("%d", &a)!=EOF){
				for(i=0; i<a; i++){
						scanf("%d", &b);
						for(j=0; j<10; j++)
								lnode[j].flag=0;
						for(j=0; j<b; j++){
								scanf("%d", &number);
								if(1<=number && number<=9){
										lnode[number].number[lnode[number].flag++]=number;
								}
								else if(10<=number && number<=99){
										lnode[number/10].number[lnode[number/10].flag++]=number;
								}
								else{
										lnode[0].number[lnode[0].flag++]=number;
								}
						}
						for(j=1; j<10; j++)
								qsort(lnode[j].number, lnode[j].flag, sizeof(int), cmp);
						for(j=0; j<10; j++){
								for(k=0; k<lnode[j].flag; k++){
										printf("%d", lnode[j].number[k]);
								}
						}
						printf("\n");
						for(j=9; j>=0; j--){
								for(k=lnode[j].flag-1; k>=0; k--){
										printf("%d", lnode[j].number[k]);
								}
						}
						printf("\n");
				}
		}
		return 0;
}
