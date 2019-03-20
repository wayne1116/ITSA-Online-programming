#include<stdio.h>
#include<stdlib.h>
#define OUT 0
#define IN  1
struct node{
		int girl;
		int boy;
		int value;
};
int cmp(const void *x, const void *y)
{
		return ((struct node *)x)->value-((struct node *)y)->value;
}
int main()
{
		struct node *lnode;
		int number, flag, count, temp, *boy, *girl, i, j;
		while(scanf("%d", &number)!=EOF){
				lnode=(struct node *)malloc(2*number*sizeof(struct node));
				count=0;
				for(i=1; i<=number; i++){
						for(j=1; j<=number; j++){
								scanf("%d", &lnode[count].value);
								lnode[count].boy=i;
								lnode[count].girl=j;
								count++;
						}
				}
				qsort(lnode, count, sizeof(struct node), cmp);
				boy=(int *)malloc(number*sizeof(int));
				girl=(int *)malloc(number*sizeof(int));
				for(i=0; i<number; i++){
						boy[i]=OUT;
						girl[i]=OUT;
				}
				flag=0;
				for(i=0; i<count; i++){
						if(boy[lnode[i].boy]!=IN && girl[lnode[i].girl]!=IN){
								printf("boy %d pair with girl %d\n", lnode[i].boy, lnode[i].girl);
								boy[lnode[i].boy]=IN;
								girl[lnode[i].girl]=IN;
								flag++;
						}
						if(flag==number)
								break;
				}
				free(lnode);
				free(boy);
				free(girl);
		}
		return 0;
}
