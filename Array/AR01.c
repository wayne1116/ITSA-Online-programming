#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int i, j;
    int pen;
    int com;
    int dir=0;
    int move;
    int curr=0;
    int curc=0;
    int maxrow=0;
    int d[4][2]={{0,1},{1,0},{0,-1},{-1,0}};
    int maxlen=-1;
    int map[64][64];
    memset(map, 0, sizeof(map));
    while(scanf("%d", &com)!=EOF){
        if(com==9) break;
        switch(com){
            case 1: pen=0;
                    break;
            case 2: pen=1;
                    break;
            case 3: dir=(dir+1)%4;
                    break;
            case 4: dir=(dir-1+4)%4;
                    break;
            case 5: scanf(",%d", &move);
                    for(i=0; i<move; i++){
                        if(pen) map[curr][curc]=1;
                        maxlen=(maxlen>curc)?maxlen:curc;
                        maxrow=(maxrow>curr)?maxrow:curr;
                        curr=curr+d[dir][0];
                        curc=curc+d[dir][1];
                    }
                    if(pen) map[curr][curc]=1;
                    maxlen=(maxlen>curc)?maxlen:curc;
                    maxrow=(maxrow>curr)?maxrow:curr;
                    break;
            case 6: for(i=0; i<=maxrow; i++){
                        for(j=0; j<=maxlen; j++) printf("%c", map[i][j]==1?'*':' ');
                        printf("\n");
                    }   
                    break;
        }
    }
    return 0;
}
