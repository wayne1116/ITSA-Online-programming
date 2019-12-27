#include<stdio.h>  
#include<stdlib.h>  
#include<string.h>  
#define MAXLINE 1024  
  
int main()  
{  
        char line[MAXLINE];  
        int len;  
        int i;  
        scanf("%s", line);  
        len=strlen(line);  
          
        for(i=0; i<len; i++) line[i]=line[i]-3;  
        printf("%s\n", line);  
        return 0;  
}  
