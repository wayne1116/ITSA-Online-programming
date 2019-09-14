#include<stdio.h>
#include<stdlib.h>
#define OUT 0
#define IN  1
struct node{
		int vert;
		int weight;
		struct node *next;
};
struct node *insert(struct node *, int, int);
int main()
{
		int i;
		int vert, target, *node, *weight, max;
		int front, rear, *value, *flag, stack[100000], select;
		struct node *lnode[100000]={NULL}, *current;
		while(scanf("%d %d", &vert, &target)!=EOF){
				node=(int *)malloc(vert*sizeof(int));
				weight=(int *)malloc(vert*sizeof(int));
				for(i=0; i<vert-1; i++)
						scanf("%d", &node[i]);
				for(i=0; i<vert-1; i++)
						scanf("%d", &weight[i]);

				for(i=1; i<vert; i++){
						lnode[i]=insert(lnode[i], node[i-1], weight[i-1]);
						lnode[node[i-1]]=insert(lnode[node[i-1]], i, weight[i-1]);
				}

				value=(int *)malloc(vert*sizeof(int));
				flag=(int *)malloc(vert*sizeof(int));
				for(i=0; i<vert; i++){
						value[i]=0;
						flag[i]=OUT;
				}
				front=rear=0;
				stack[rear++]=target;
				while(front!=rear){
						select=stack[front++];
						flag[select]=IN;
						current=lnode[select];
						while(current){
								if(flag[current->vert]!=IN){
										stack[rear++]=current->vert;
										value[current->vert]=value[select]+current->weight;
								}
								current=current->next;
						}
				}
				max=value[0];
				for(i=1; i<vert; i++)
						if(max<value[i])
								max=value[i];
				printf("%d\n", max);
		}
		return 0;
}

struct node *insert(struct node *p, int vert, int weight)
{
		struct node *new;
		new=(struct node *)malloc(sizeof(struct node));
		new->vert=vert;
		new->weight=weight;
		new->next=p;
		return new;
}
