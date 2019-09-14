#include<stdio.h>  
#include<stdlib.h>  
int main()  
{  
    int a, i, j, k, number, base, temp, number1;  
    char result[1024];  
    while(scanf("%d", &a)!=EOF){  
        for(i=0; i<a; i++){  
            scanf("%d %d", &number, &base);  
            for(j=0; j<1024; j++){  
                result[j]='0';  
            }  
            j=0; number1=number;  
            while(number>0){  
                temp=number%base;  
                if(base>10 && temp>=10){  
                    result[j++]=temp+55;  
                }  
                else{  
                    result[j++]=temp+48;  
                }  
                number/=base;  
            }  
              
            for(k=j-1; k>0; k--){  
                printf("%c", result[k]);  
            }  
            printf("%c\n", result[0]);  
        }  
    }  
    return 0;  
}  
