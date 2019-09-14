#include<stdio.h>
#include<stdlib.h>
#define INTMAX 2147483647
#define OUT 0
#define IN  1
#define CYCLE 2
int graph[100][100];
struct node{
       int vert1;
       int vert2;
       int weight;
}shortpath[100];   
int algor(int );
int cmp(const void *x, const void *y);
int main()
{
		int vert, edge, i, j, row, col, weight, count, result=0;
		while(scanf("%d %d", &vert, &edge)!=EOF){
				for(i=0; i<vert; i++)
						for(j=0; j<vert; j++)
								graph[i][j]=0;
				for(i=0; i<edge; i++){
						scanf("%d%d%d", &row, &col, &weight);
						graph[row-1][col-1]=weight;
						graph[col-1][row-1]=weight;
				}
				count=algor(vert);
				result=0;
				for(i=0; i<count; i++){
                         result+=shortpath[i].weight;
                }
                printf("%d\n", result);
		}
		return 0;
}

int algor(int number)
{
		int count=0, count1=0, result=0, state, temp[100][100];
		int i, j, tnumber, index1, index2, flag, tflag;
		struct node edge[100], current;
		for(i=0; i<number; i++){ // select the edges
				for(j=i; j<number; j++){
						if(graph[i][j]!=0){
								edge[count].vert1=i;
								edge[count].vert2=j;
								edge[count].weight=graph[i][j];
								count++;
						}
				}
		}
		qsort(edge, count, sizeof(edge[0]), cmp); // sorting
		j=0; count1=0; result=0; flag=0; tflag=0;
		while(j<count && result<number-1){
				current=edge[j];
				state=OUT;
				for(i=0; i<count1; i++){
						if(temp[i][0]==current.vert1 || temp[i][0]==current.vert2){
								if(state==OUT){
										if(temp[i][0]==current.vert1)
												tnumber=current.vert2;
										else
												tnumber=current.vert1;
										tflag=temp[i][1];
										index1=i;
										state=IN;
								}
								else if(state==IN){
										index2=i;
										state=CYCLE;
										break;
								}
						}
				}
				if(state!=CYCLE){
						shortpath[result++]=current;
						if(state==IN){
								temp[count1][0]=tnumber;
								temp[count1++][1]=tflag;
						}
						else{
								temp[count1][0]=current.vert1;
								temp[count1++][1]=flag;
								temp[count1][0]=current.vert2;
								temp[count1++][1]=flag;
								flag++;
						}
				}
				else{
						if(temp[index1][1]!=temp[index2][1]){
								shortpath[result++]=current;
								tflag=temp[index2][1];
								for(i=0; i<count1; i++){
										if(temp[i][1]==tflag)
												temp[i][1]=temp[index1][1];
								}
						}
				}
				j++;			
		}
		return result;
}
int cmp(const void *x, const void *y)
{
		return ((struct node *)y)->weight-((struct node *)x)->weight;
}
