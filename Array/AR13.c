#include<stdio.h>  
#include<stdlib.h>  
#include<string.h>  
int result=0;  
int row;  
int len;  
int visited[16][16]; 
int flag[16]; 
  
void rec(int s, int e, int l)  
{  
    int i;  
    if(l>len) return;  
    else if(len==l){  
        if(s==e) result=1;  
        return;  
    }   
    for(i=0; i<row; i++){  
        if(visited[s][i] && !flag[i]){  
            flag[i]=1;  
            rec(i, e, l+1);  
            flag[i]=0;  
            if(result) return;  
        }  
    }  
}  
  
int main()  
{  
    int i;  
    int j;  
    int s;  
    int e;  
    int a;  
    int map;  
  
    scanf("%d", &a);  
    while(a--){  
        scanf("%d %d", &row, &len);  
        for(i=0; i<row; i++){  
            for(j=0; j<row; j++){  
                scanf("%d", &visited[i][j]);    
            }  
            flag[i]=0;
        }  
        scanf("%d %d", &s, &e);  
        result=0;
        flag[s-1]=1;
        rec(s-1, e-1, 0);  
          
        if(result==0) printf("No\n");  
        else printf("Yes\n");  
    }  
    return 0;  
}  
