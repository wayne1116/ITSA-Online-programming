#include<stdio.h>  
#include<stdlib.h>  
int main()  
{  
    int i, a, b;  
    while(scanf("%d%d", &a, &b)!=EOF){  
        for(i=1; i<1000; i++){  
            if((i*a-1)%b==0){  
                printf("%d %d\n",i, (i*a-1)/b);  
                break;  
            }  
        }  
        if(i==1000){  
            printf("No solution!\n");  
        }  
    }  
    return 0;  
}  
