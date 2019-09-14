#include<stdio.h>  
#include<stdlib.h>  
#include<ctype.h>  
int main()  
{  
    int result, number1, number2, top, stack[1024];  
    char line[1024], *ptr;  
    while(scanf("%s", line)!=EOF){  
        ptr=line; top=-1; result=0;  
        if(*ptr=='0'){  
            break;  
        }  
        while(*ptr){  
            if(isdigit(*ptr)){  
                stack[++top]=*ptr-48;  
            }  
            else{  
                number1=stack[top--];  
                number2=stack[top--];  
                if(*ptr=='+'){  
                    result=(number1+number2);  
                }  
                else if(*ptr=='-'){  
                    result=(number2-number1);  
                }  
                else if(*ptr=='*'){  
                    result=(number1*number2);  
                }  
                else if(*ptr=='/'){  
                    result=(number2/number1);  
                }  
                else{  
                    result=(number2%number1);  
                }  
                stack[++top]=result;  
            }  
            ptr++;  
        }  
        printf("%d\n", result);  
    }  
    return 0;  
 }  
