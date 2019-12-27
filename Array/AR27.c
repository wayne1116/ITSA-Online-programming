#include<stdio.h>  
#include<stdlib.h>  
#include<string.h>  
int main()  
{  
        int i;  
        int n;  
        int a;  
        short flag[70001];  
        scanf("%d", &n);  
        memset(flag, 0, sizeof(flag));  
        while(scanf("%d", &a)!=EOF){  
            flag[a]=1;  
        }  
        for(i=1; i<=n; i++){  
            if(flag[i]==0){  
                printf("%d\n", i);  
                break;  
            }  
        }  
          
        return 0;  
}  
