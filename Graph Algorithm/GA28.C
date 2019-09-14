#include<stdio.h>
#include<stdlib.h>
#define OUT 0
#define IN  1
struct node{
		int vert;
		int weight;
		struct node *next;
};
struct node *insert(struct node *, int , int );
int main()
{
		int number, vert, i, j, k, node[5001], node1[5001];
		int total=0, front, rear, num, stack[5001][2], flag[5001];
		struct node *lnode[5001]={NULL}, *current, *previous;
		while(scanf("%d", &number)!=EOF){
				for(k=0; k<number; k++){
						scanf("%d", &vert);
						for(i=0; i<vert-1; i++)
								scanf("%d", &node[i]);
						for(i=0; i<vert-1; i++)
								scanf("%d", &node1[i]);

						for(i=0, j=2; i<vert-1; i++, j++){
								lnode[node[i]]=insert(lnode[node[i]], j, node1[i]);
								lnode[j]=insert(lnode[j], node[i], node1[i]);
						}

						total=0;
						for(i=1; i<=vert; i++){
								if(lnode[i]){
										current=lnode[i];
										front=rear=0;
										while(current){
												stack[rear][0]=current->vert;
												stack[rear++][1]=current->weight;
												current=current->next;
										}
										for(j=1; j<=vert; j++)
												flag[j]=OUT;
										flag[i]=IN;
										while(front!=rear){
												num=stack[front][0];
												total+=stack[front][1];
												flag[num]=IN;
												current=lnode[num];
												while(current){
														if(flag[current->vert]==OUT){
																stack[rear][0]=current->vert;
																stack[rear++][1]=current->weight+stack[front][1];
														}
														current=current->next;
												}
												front++;
										}
								}
						}
						printf("%d\n", total);
						for(i=1; i<=vert; i++){
								current=previous=lnode[i];
								while(current){
										previous=current;
										current=current->next;
										free(previous);
								}
								lnode[i]=NULL;
						}
				}
		}
		return 0;
}

struct node *insert(struct node *p, int vert, int weight)
{
		struct node *new, *current;
		new=(struct node *)malloc(sizeof(struct node));
		new->vert=vert;
		new->weight=weight;
		new->next=NULL;
		if(p==NULL)
				return new;
		current=p;
		while(current->next)
				current=current->next;
		current->next=new;
		return p;
}

