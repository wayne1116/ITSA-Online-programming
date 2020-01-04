#include<stdio.h>  
#include<string.h>  
int main()  
{  
    char line[1024], *ptr;  
    int c, count;  
    while(scanf("%s", line)!=EOF){  
        ptr=line; count=strlen(line);  
        while(*ptr){  
            if(*ptr=='\n') break;  
            c=*ptr;  
            while(c>0){  
                if(c%2==0){  
                    count++;  
                }  
                c/=2;  
            }  
            ptr++;  
        }  
        printf("%d\n", count);  
    }  
    return 0;  
}  
