#include<stdio.h>
#include<stdlib.h>
#define MAX 2048
struct node{
		int row;
		int col;
};
int main()
{
		struct node stack[1024], position;
		int loop, i=0, j=0, l=0, row, col, top;
		char graph[32][128], *ptr, line[MAX], line1[MAX];

		while(fgets(line1, MAX, stdin)!=NULL){
				loop=atoi(line1);
				for(l=0; l<loop; l++){
						while(fgets(line, MAX, stdin)!=NULL){
								ptr=line;
								if(*ptr=='_'){
										top=0;
										stack[top].row=row;
										stack[top].col=col;
										while(top>-1){
												position=stack[top--];
												row=position.row;
												col=position.col;
												graph[row][col]='#'; graph[row+1][col]='#'; graph[row-1][col]='#';
												graph[row][col+1]='#'; graph[row][col-1]='#'; graph[row-1][col-1]='#';
												graph[row-1][col+1]='#'; graph[row+1][col-1]='#'; graph[row+1][col+1]='#';
												if(graph[row-2][col]==' '){
														stack[++top].row=row-4;
														stack[top].col=col;
														graph[row-2][col]='#';
												}
												if(graph[row+2][col]==' '){
														stack[++top].row=row+4;
														stack[top].col=col;
														graph[row+2][col]='#';
												}
												if(graph[row][col-2]==' '){
														stack[++top].row=row;
														stack[top].col=col-4;
														graph[row][col-2]='#';
												}
												if(graph[row][col+2]==' '){
														stack[++top].row=row;
														stack[top].col=col+4;
														graph[row][col+2]='#';
												}
										}
										for(j=0; j<i; j++)
												printf("%s", graph[j]);
										printf("%s", ptr);
										i=0;
										break;
								}
								else{
										j=0;
										while(*ptr){
												if(*ptr=='*'){
														row=i;
														col=j;
												}
												graph[i][j]=*ptr;
												j++;
												ptr++;
										}
										graph[i][j]='\0';
										i++;
								}
						}
				}
		}
		return 0;
}
