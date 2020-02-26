#include<stdio.h>  
#include<stdlib.h>  
int n=0, l=0, lower=0, upper=0;  
int aver=0, bestv=0, bestw=0;  
struct node{  
    int v, w;  
}lnode[32];  
void solve(int item, int tv, int tw, int level)  
{  
    int t=0;  
    if(tw>upper) return ;  
    if(level==n){  
        if(item>=l && tw>=lower){  
            t=tv/tw;  
            if(t*tw!=tv) t++;  
            if(t>aver){  
                aver=t;  
                bestv=tv;  
                bestw=tw;  
            }  
        }  
        return ;  
    }   
    solve(item+1,tv+lnode[level].v,tw+lnode[level].w,level+1);  
    solve(item,tv,tw,level+1);  
}  
int main()  
{  
    int i=0, com=0;  
    while(scanf("%d%d%d%d",&n,&l,&lower,&upper)){  
        for(i=0; i<n; i++) scanf("%d%d",&lnode[i].v,&lnode[i].w);  
        solve(0,0,0,0);  
        if(aver>0) printf("%d\n", aver);  
        else printf("-1\n");  
          
        scanf("%d",&com);  
        if(com==-1) break;  
        aver=-1;  
    }  
    return 0;  
}  
