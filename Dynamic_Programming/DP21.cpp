#include<stdio.h>  
#include<stdlib.h>  
int main()  
{  
        int i, result[1024], a, number;  
        result[0]=0; result[1]=1;  
        for(i=2; i<=1000; i++)  
                result[i]=result[i-1]+result[i-2];  
        while(scanf("%d", &a)!=EOF){  
                for(i=0; i<a; i++){  
                        scanf("%d", &number);  
                        printf("%d\n", result[number]);  
                }  
        }  
        return 0;  
}  
