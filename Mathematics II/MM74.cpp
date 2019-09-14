#include<stdio.h>  
#include<stdlib.h>  
int main()  
{  
    int a, b, number;  
    while(scanf("%d %d", &a, &b)!=EOF){  
        if(a%2==0){  
            a++;  
        }  
        if(b%2==0){  
            b--;  
        }  
        number=(b-a)/2+1;  
        printf("%d\n", (a+b)*number/2);  
    }  
    return 0;  
}  
