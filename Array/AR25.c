#include<stdio.h>
#include<stdlib.h>
short map[128][1024];
short flag[128][1024];
int count[2048];
int dir[4][2]={{1,0},{0,1},{-1,0},{0,-1}};
int bfs(int x, int y, int row, int col)
{
    int qux[1024];
    int quy[1024];
    int end=0;
    int start=0;
    int dis=1;
    int tmp;
    int r, c, i, j;
    for(i=0; i<row; i++){
        for(j=0; j<col; j++) flag[i][j]=0; 
    }
    for(i=0; i<4; i++){
        r=x+dir[i][0];
        c=y+dir[i][1];
        if(r>=0 && r<row && c>=0 && c<col && map[r][c]>=0){
            qux[end]=r;
            quy[end]=c;
            ++end;
        }
    }

    while(start<end){
        tmp=end;
        while(start<tmp){
            x=qux[start];
            y=quy[start];
            flag[x][y]=1;
            ++start;
            map[x][y]=(map[x][y]>dis)?dis:map[x][y];
            for(i=0; i<4; i++){
                r=x+dir[i][0];
                c=y+dir[i][1];
                if(r>=0 && r<row && c>=0 && c<col && map[r][c]>=0 && !flag[r][c]){
                    qux[end]=r;
                    quy[end]=c;
                    ++end;
                }
            }
        }
        ++dis;
    }
}
int main()
{
    int i,j;
    int row;
    int col;
    int count[2048];
    char line[1024];

    scanf("%d %d", &row, &col);
    for(i=0; i<2048; i++) count[i]=0;
    for(i=0; i<row; i++){
        scanf("%s", line);
        for(j=0; j<col; j++){
            if(line[j]=='#') map[i][j]=-2;
            else if(line[j]=='*') map[i][j]=-1;
            else map[i][j]=4096;
        }
    }

    for(i=0; i<row; i++){
        for(j=0; j<col; j++){
            if(map[i][j]==-2){
                bfs(i, j, row, col);
            }
        }
    }

    for(i=0; i<row; i++){
        for(j=0; j<col; j++){
            if(map[i][j]==4096) ++count[0];
            else if(map[i][j]>0) ++count[map[i][j]];
        }
    }

    for(i=0; i<2048; i++){
        if(count[i]>0) printf("%d %d\n", i, count[i]);
    }
    return 0;
}
