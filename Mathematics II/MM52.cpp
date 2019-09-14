#include<stdio.h>  
#include<stdlib.h>  
int main()  
{  
    int number[4]={6, 28, 496, 8128}, i, a;  
    while(scanf("%d", &a)!=EOF){  
        for(i=0; i<4; i++){  
            if(number[i]<=a){  
                printf("%d\n", number[i]);  
            }  
        }  
    }  
    return 0;  
}  
