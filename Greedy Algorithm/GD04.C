#include<stdio.h>
#include<stdlib.h>
struct node{
		int weight;
		int deadline;
};
int cmp(const void *x, const void *y)
{
		return ((struct node *)x)->deadline-((struct node *)y)->deadline;
}
int main()
{
		int a=0, b=0, i=0, j=0, total=0;
		struct node lnode[128];
		while(scanf("%d", &a)!=EOF){
				for(i=0; i<a; i++){
						scanf("%d", &b);
						for(j=0; j<b; j++)
								scanf("%d", &lnode[j].weight);
						for(j=0; j<b; j++)
								scanf("%d", &lnode[j].deadline);
						qsort(lnode,b,sizeof(struct node),cmp);

						total=0;
						for(j=0; j<b; j++){
								total+=lnode[j].weight;
								if(total>lnode[j].deadline){
										printf("No\n");
										break;
								}
						}
						if(j==b)
								printf("Yes\n");
				}
		}
		return 0;
}
