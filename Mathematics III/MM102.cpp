#include<stdio.h>  
#include<stdlib.h>  
#define SWAP(x, y, z) ((z)=(x), (x)=(y), (y)=(z))  
int main()  
{  
    int i, a, j, temp, number[1024];  
    while(scanf("%d", &a)!=EOF){  
        for(i=0; i<a; i++){  
            scanf("%d", &number[i]);  
        }  
        for(i=0; i<a-1; i++){  
            for(j=0; j<a-i-1; j++){  
                if(number[j]<number[j+1]){  
                    SWAP(number[j], number[j+1], temp);  
                }  
            }  
        }  
        for(i=0; i<a; i++){  
            printf("%d %d\n", i+1, number[i]);  
        }  
    }  
 }  
