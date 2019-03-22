#include<stdio.h>
#include<stdlib.h>
int main()
{
		int row, col, i, j, maze[100][100], mark[100][100], result[100][100];
		int index1, index2, result1, min;
		while(scanf("%d%d", &row, &col)!=EOF){
				for(i=0; i<row; i++){
						for(j=0; j<col; j++){
								scanf("%d", &maze[i][j]);
								mark[i][j]=0;
								result[i][j]=-1;
						}
				}
				mark[0][0]=1; index1=0; index2=0; result[0][0]=maze[0][0];
				while(1){
						if(index1==row-1 && index2==col-1)
								break;
						if(index1-1>0 && !mark[index1-1][index2]){
								result1=result[index1][index2]+maze[index1-1][index2];
								if(result[index1-1][index2]==-1 || result[index1-1][index2]>result1)
										result[index1-1][index2]=result1;
						}
						if(index1+1<row && !mark[index1+1][index2]){
								result1=result[index1][index2]+maze[index1+1][index2];
								if(result[index1+1][index2]==-1 || result[index1+1][index2]>result1)
										result[index1+1][index2]=result1;
						}
						if(index2-1>0 && !mark[index1][index2-1]){
								result1=result[index1][index2]+maze[index1][index2-1];
								if(result[index1][index2-1]==-1 || result[index1][index2-1]>result1)
										result[index1][index2-1]=result1;
						}
						if(index2+1<col && !mark[index1][index2+1]){
								result1=result[index1][index2]+maze[index1][index2+1];
								if(result[index1][index2+1]==-1 || result[index1][index2+1]>result1)
										result[index1][index2+1]=result1;
						}
						min=2147483647;
						for(i=0; i<row; i++){
								for(j=0; j<col; j++){
										if(result[i][j]!=-1 && !mark[i][j] && min>result[i][j]){
												index1=i; index2=j; min=result[i][j];
										}
								}
						}
						mark[index1][index2]=1;
				}
				printf("%d\n", result[row-1][col-1]);
		}
		return 0;
}
