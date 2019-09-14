#include<stdio.h>  
#include<stdlib.h>  
int main()  
{  
    int a, i, j;  
    short *result;  
    while(scanf("%d", &a)!=EOF){  
        result=(short *)calloc(1024, sizeof(short));  
        i=0;  
        while(a>0 || i<10){  
            result[i++]=a%2;  
            a/=2;  
        }  
        for(j=7; j>3; j--){  
            printf("%d", result[j]);  
        }  
        printf("\n"); free(result);  
    }  
}  
