#include<stdio.h>
#include<stdlib.h>
struct node{
	int x;
	int y;
};
int cmp(const void *x, const void *y)
{
	return ((struct node *)x)->x-((struct node *)y)->x;
}
int main()
{
	int a=0, b=0;
	int i=0, j=0, k=0;
	int count=0;
	struct node lnode[10000];
	while(scanf("%d", &a)!=EOF){
		for(i=0; i<a; i++){
			scanf("%d", &b);
			for(j=0; j<b; j++)
				scanf("%d%d", &lnode[j].x, &lnode[j].y);
			qsort(lnode, b, sizeof(struct node), cmp);
			count=0;
			for(j=0; j<b-1; j++){
				for(k=j+1; k<b; k++){
					if(lnode[j].y<lnode[k].y)
						break;
				}
				if(k==b)
					count++;
			}
			printf("%d\n", count+1);
		}
	}
	return 0;
}
