#include<stdio.h>  
#include<stdlib.h>  
int main()  
{  
    int a, i, number, count;  
    while(scanf("%d", &a)!=EOF){  
        for(i=0; i<a; i++){  
            scanf("%d", &number);  
            count=0;  
            if(number==1){  
                printf("1\n");  
            }  
            else{  
            while(number!=1){  
                if(number%2==0){  
                    number/=2;  
                }  
                else{  
                    number=number*3+1;  
                }  
                count++;  
            }  
            printf("%d\n", count);  
        }  
        }  
    }  
    return 0;  
}  
