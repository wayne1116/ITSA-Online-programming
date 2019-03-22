#include<stdio.h>
#include<stdlib.h>
#define unselected 0
#define selected 1
#define INTMAX 2147483647
#define MAX 128
int graph[6][6];
int print[6];
struct node{
		int vert;
};
struct node *insert(struct node *, int );
void algor(int, int, int);
int main()
{
        char line[MAX], line1[10], *ptr, *ptr1;
		int i, start, end, number[3], vert1, vert2, weight, count;
		while(fgets(line, MAX, stdin)!=NULL){
				ptr=line;
				if(*(ptr+1)=='E'){
						fgets(line1, 10, stdin);
						ptr1=line1;
						start=atoi(ptr1);
						while(*ptr1){
								if(*ptr1==','){
										ptr1++;
										end=atoi(ptr1);
										break;
								}
								ptr1++;
						}
						algor(start-1, 5, end-1);
				}
				if(isdigit(*ptr)){
						vert1=atoi(ptr);
						i=0;
						while(*ptr){
								if(*ptr==','){
										ptr++;
										number[i++]=atoi(ptr);
								}
								ptr++;
						}
						vert2=number[0];
						weight=number[1];
						graph[vert1-1][vert2-1]=weight;
						graph[vert2-1][vert1-1]=weight;
				}
		}
		return 0;
}
void algor(int start, int number, int end)
{
		int i, j, min, index, *flag, *value, print[5], result;
		struct node *lnode[5]={NULL}, *new;
		flag=(int *)malloc(number*sizeof(int));
		value=(int *)malloc(number*sizeof(int));
		for(i=0; i<number; i++){ //initialize
				flag[i]=unselected;
				value[i]=-1;
		}
		value[start]=0;
		new=(struct node *)malloc(sizeof(struct node));
		new->vert=-1;
		lnode[start]=new;
		for(i=0; i<number; i++){
				min=2147483647;
				for(j=0; j<number; j++){
						if(flag[j]==unselected && min>value[j] && value[j]!=-1){ // find the smallest cost 
								min=value[j];
								index=j;
						}
				}
				flag[index]=selected;
				for(j=0; j<number; j++){ // initialize the point which is connected with . 
						if(flag[j]==unselected && graph[index][j]!=0)
								if(value[j]==-1 || value[j]>graph[index][j]+min){
										value[j]=graph[index][j]+min;
										lnode[j]=insert(lnode[j], index);
								}
				}
		}
		print[0]=end;
		i=1; result=end;
		while(result!=start){
				print[i++]=lnode[result]->vert;
				result=lnode[result]->vert;
		}
		printf("The shortest path cost: %d\n", value[end]); 
		printf("Traveling nodes: ");
		for(j=i-1; j>0; j--)
				printf("%d,", print[j]+1);
		printf("%d\n", print[j]+1);
		free(flag);
		free(value);
}
struct node *insert(struct node *p, int index)
{
		struct node *new;
		if(p==NULL){
				new=(struct node *)malloc(sizeof(struct node));
				new->vert=index;
				return new;
		}
		p->vert=index;
		return p;
}
