#include<stdio.h>
#include<stdlib.h>
struct node{
		int vert;
		int value;
		struct node *next;
};
struct node *lnode[90000]={NULL};
struct node *insert(struct node *, int);
int sum(int, int);
int main()
{
		int a, b, i, top, stack[90000], *count, min, index, result;
		struct node *current;
		while(scanf("%d", &a)!=EOF){
				count=(int *)calloc(a, sizeof(int));
				for(i=1; i<a; i++){
						scanf("%d", &b);
						lnode[b]=insert(lnode[b], i);
						lnode[i]=insert(lnode[i], b);
						count[i]++;
						count[b]++;
				}
				top=-1;
				for(i=0; i<a; i++){
						if(count[i]>1)
								stack[++top]=i;
				}

				min=2147483647;
				index=-1;
				for(i=0; i<=top; i++){
						result=sum(stack[i], a);
						if(min>result){
								min=result;
								index=stack[i];
						}
				}
				printf("%d\n", index);
				free(count);
		}
		return 0;
}
struct node *insert(struct node *p, int a)
{
		struct node *new;
		new=(struct node *)malloc(sizeof(struct node));
		new->vert=a;
		new->next=p;
		return new;
}
int sum(int a, int number)
{
		int temp[90000], count=1, front, rear, result=0, i, v, *visit;
		struct node *c;
		front=rear=0; temp[rear++]=a; lnode[a]->value=0;
		visit=(int *)malloc(number*sizeof(int));
		for(i=0; i<number; i++)
				visit[i]=0;
		while(front!=rear){
				v=temp[front++];
				for(c=lnode[v]; c; c=c->next){
						if(!visit[c->vert]){
								visit[c->vert]=1;
								lnode[c->vert]->value=lnode[v]->value+1;
								result+=count;
								temp[rear++]=c->vert;
						}
				}
		}
		return result;
}







