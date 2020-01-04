#include<stdio.h>  
#include<stdlib.h>  
#include<ctype.h>  
#define MAX 1024  
int main()  
{  
    char line[MAX], EN[]={"ABCDEFGHIJKLMNOPQRSTUVWXYZ"}, en[]={"abcdefghijklmnopqrstuvwxyz"}, *ptr;  
    while(fgets(line, MAX, stdin)!=NULL){  
        ptr=line;  
        while(*ptr){  
            if(*ptr=='\r' || *ptr=='\n') break;
            if(isalpha(*ptr)){  
                if(isupper(*ptr))  
                    printf("%c", EN[(*ptr-65+13)%26]);  
                else  
                    printf("%c", en[(*ptr-97+13)%26]);  
                }  
            else  
                printf("%c", *ptr);  
            ptr++;  
        }  
        printf("\n");
    }  
    return 0;  
}  
