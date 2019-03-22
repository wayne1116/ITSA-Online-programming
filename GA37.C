#include<stdio.h>
#include<stdlib.h>
#define OUT 0
#define IN  1
struct node{
		int vert;
		struct node *next;
};
struct node *insert(struct node *, int);
int main()
{
		int vert, vert1, vert2, *state, count, i;
		struct node *lnode[100000]={NULL}, *current, *previous;
		while(scanf("%d", &vert)!=EOF){
				for(i=0; i<vert-1; i++){
						scanf("%d %d", &vert1, &vert2);
						lnode[vert1]=insert(lnode[vert1], vert2);
						lnode[vert2]=insert(lnode[vert2], vert1);
				}

				state=(int *)malloc(vert*sizeof(int));
				for(i=0; i<vert; i++)
						state[i]=OUT;

				for(i=0; i<vert; i++){
						current=lnode[i];
						count=0;
						while(current){
								count++;
								previous=current;
								current=current->next;
								free(previous);
						}
						lnode[i]=NULL;
						if(count==1)
								state[i]=IN;
				}
				count=0;
				for(i=0; i<vert; i++){
						if(state[i]==OUT)
								count++;
				}
				printf("%d\n", count);
				free(state);
		}
		return 0;
}
struct node *insert(struct node *p, int vert)
{
		struct node *new;
		new=(struct node *)malloc(sizeof(struct node));
		new->vert=vert;
		new->next=p;
		return new;
}
