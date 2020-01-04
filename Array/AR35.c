#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define min(a,b) (a>b?b:a)
#define MAX_VALUE 1000000
int main()
{
    int i, j, tmp;
    int n, edge;
    int node1, node2, v;
    int s, e, passager;
    int start, end, node;
    int map[128][128];
    int count[128];
    int qu[128];

    while(scanf("%d %d", &n, &edge)!=EOF){
        if(n==0 && edge==0) break;
        for(i=0; i<=n; i++){  
            for(j=0; j<=n; j++) map[i][j]=-1;  
        }  
        for(i=0; i<edge; i++){
            scanf("%d %d %d", &node1, &node2, &v);
            map[node1][node2]=v;
            map[node2][node1]=v;
        }
        scanf("%d %d %d", &s, &e, &passager);
        memset(count, 0, sizeof(count));
        count[s]=MAX_VALUE;
        start=end=0;
        qu[end++]=s;
        while(start<end){
            node=qu[start++];
            for(i=1; i<=n; i++){
                if(map[node][i]>=0){
                    tmp=min(count[node], map[node][i]);
                    if(count[i]<tmp){
                        qu[end++]=i;
                        count[i]=tmp;
                    }
                }
            }
        }
        printf("%d\n", passager%(count[e]-1)==0?passager/(count[e]-1):(passager/(count[e]-1)+1)); 
    }
    return 0;
}
