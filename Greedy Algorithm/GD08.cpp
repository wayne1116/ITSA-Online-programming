#include<stdio.h>  
#include<stdlib.h>  
int main()  
{  
    int a=0, result=0, parent[10001], spy[10001], i=0;  
    scanf("%d", &a);  
    for(i=1; i<a; i++){  
        scanf("%d", &parent[i]);  
        spy[i]=0;   
    }   
    result=0;  
    for(i=a-1; i>=1; i--){  
        if(spy[i])  
            continue;  
        if(spy[parent[i]])  
            continue;  
        spy[parent[i]]=1;  
        result++;  
    }  
    printf("%d\n", result);  
    return 0;  
}  
