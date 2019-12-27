#include<stdio.h>    
#include<stdlib.h>    
int abs(int a)  
{  
    return a>0?a:-a;  
}    
int max(int a, int b)  
{  
    return a>b?a:b;  
}  
  
int main()    
{    
    int n;  
    int i;  
    int j;  
    int close;  
    int index;  
    int diff;  
    int num[1024];  
    int result[1024];  
  
    scanf("%d", &n);  
    for(i=0; i<n; i++){  
        scanf("%d", &num[i]);  
    }  
  
    for(i=0; i<n; i++){  
        close=2147483647;  
        for(j=0; j<n; j++){  
            if(i!=j){  
                diff=abs(num[i]-num[j]);  
                if(close>diff){  
                    close=diff;  
                    index=j+1;  
                }  
                else if(close==diff) index=max(index, j+1);  
            }  
            result[i]=index;  
        }  
    }  
    for(i=0; i<n-1; i++) printf("%d ", result[i]);  
    printf("%d\n", result[i]);  
    return 0;    
}  
