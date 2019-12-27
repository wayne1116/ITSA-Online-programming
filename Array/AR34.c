#include<stdio.h>  
#include<stdlib.h>  
#include<string.h>  
int result=0;  
int row;  
int col;  
int dir[4][2]={{1,0},{-1,0},{0,1},{0,-1}};  
int visited[16][16];  
void dfs(int r, int c)  
{  
    int i;  
    if(r<0 || r>=row || c<0 || c>=col) return;  
    else if(visited[r][c]) return;  
    else if(r==row-1 && c==col-1){  
        ++result;  
        return;  
    }  
  
    visited[r][c]=1;  
    for(i=0; i<4; i++){  
        if(!visited[r+dir[i][0]][c+dir[i][1]]) dfs(r+dir[i][0], c+dir[i][1]);  
    }  
    visited[r][c]=0;  
}  
int main()  
{  
    int i;  
    int j;  
    int map;  
  
    while(scanf("%d %d", &row, &col)!=EOF){  
        for(i=0; i<row; i++){  
            for(j=0; j<col; j++){  
                scanf("%d", &map);  
                visited[i][j]=0;  
                if(map) visited[i][j]=1;  
            }  
        }  
        result=0;  
        dfs(0,0);  
        printf("%d\n", result);  
    }  
    return 0;  
}  
