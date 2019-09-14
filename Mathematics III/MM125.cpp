#include<stdio.h>  
#include<stdlib.h>  
#include<string.h>  
int main()  
{  
    char line[1024], *ptr1, *ptr;  
    int len, result, carry;  
    while(scanf("%s", line)!=EOF){  
        if(line[0]=='#'){  
            break;  
        }  
        len=strlen(line);  
        ptr=line; ptr1=&line[len-1];  
        carry=0; result=0;  
        while(ptr1!=ptr){  
            if(*ptr1-48+*ptr1-48+carry>=3){  
                result++;  
                carry=1;  
            }  
            else{  
                carry=0;  
            }  
            ptr1--;  
        }  
        if(*ptr1-48+*ptr1-48+carry>=3){  
            result++;  
        }  
        printf("%d\n", result);  
    }  
    return 0;  
 }  
