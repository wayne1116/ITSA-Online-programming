#include<stdio.h>  
#include<stdlib.h>  
int main()  
{  
    int result[92], i, a;  
    result[0]=1; result[1]=result[2]=2;  
    
    for(i=3; i<92; i++){  
        result[i]=result[i-1]/4+result[i-2]/2+result[i-3];  
    }  
    
    while(scanf("%d", &a)!=EOF){  
        printf("%d\n", result[a]);  
    }  
    return 0;  
}  
