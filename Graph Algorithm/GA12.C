#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#define INTMAX 2147483647
#define MAX 128
int graph[5][5];
int parent[100];
void algor(int);
int find(int i)
{
		while(parent[i])
				i=parent[i];
		return i;
}
int uni(int i, int j)
{
		if(i!=j){
				parent[j]=i;
				return 1;
		}
		return 0;
}
int main()
{
		char line[MAX], line1[10], *ptr, *ptr1;
		int i, start, end, number[3], vert1, vert2, weight;
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
						algor(5);
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

void algor(int number)
{
		int cost[5][5];
		int i, j, u, v, a, b, ne=1, min, mincost=0;
		for(i=0; i<number; i++){
				for(j=0; j<number; j++){
						cost[i][j]=graph[i][j];
				}
		}
		for(i=0; i<number; i++)
				parent[i]=0;

		for(i=0; i<number; i++){
				for(j=0; j<number; j++){
						if(cost[i][j]==0)
								cost[i][j]=INTMAX;
				}
		}
		printf("The edge of Minimum Cost Spanning Tree are\n");
		while(ne<number){
				for(i=0, min=INTMAX; i<number; i++){
						for(j=0; j<number; j++){
								if(cost[i][j]<min){
										min=cost[i][j];
										a=u=i;
										b=v=j;
								}
						}
				}
				u=find(u);
				v=find(v);
				if(uni(u,v)){
						printf("%d edge <%d %d> =%d\n", ne++, a+1, b+1, min);
						mincost+=min;
				}
				cost[a][b]=cost[b][a]=INTMAX;
		}
		printf("\n\tMinimum cost = %d\n", mincost);
}
