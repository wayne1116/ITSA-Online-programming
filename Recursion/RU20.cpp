#include<stdio.h>  
#include<stdlib.h>  
#define SWAP(x, y, z) ((z)=(x),(x)=(y),(y)=(z))  
int gcd(int a, int b)  
{  
    if(b==0){  
        return a;  
    }  
    return gcd(b,a%b);  
}  
int main()  
{  
    char line[1024], *ptr;  
    int number[1024], i, j, temp, num1, num2, cost, result;  
    while(fgets(line, 1024, stdin)!=NULL){  
        ptr=line;  
        number[0]=atoi(ptr); j=1;  
        while(*ptr){  
            if(*ptr==' '){  
                ptr++;  
                number[j++]=atoi(ptr);  
            }  
            ptr++;  
        }  
        for(i=0; i<j/2; i++){  
            SWAP(number[i], number[j-i-1], temp);  
        }  
        num1=number[0]; num2=number[1]; cost=1;  
        num2=num1*num2+cost; cost=num1; num1=num2;  
        for(i=2; i<j; i++){  
            num2=number[i];  
            num2=num2*num1+cost; cost=num1; num1=num2;  
        }  
        result=gcd(cost, num1);  
        printf("%d %d\n", num1/result, cost/result);  
    }  
    return 0;  
}  
