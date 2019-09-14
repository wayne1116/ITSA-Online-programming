#include<stdio.h>  
#include<stdlib.h>  
int main()  
{  
    char result[26][10]={"10","0111","0101","011","1","1101","001","1111","11","1000","010","1011","00","01","000","1001","0010","101","111","0","110",  
                         "1110","100","0110","0100","0011"};  
    char *ptr, line[1024];  
    int a, i;  
    while(scanf("%d", &a)!=EOF){  
        for(i=0; i<a; i++){  
            scanf("%s", line);  
            printf("%s:", line);  
            ptr=line;  
            while(*ptr){  
                printf(" %s", result[*ptr-65]);  
                ptr++;  
            }  
            printf("\n");  
        }  
    }  
    return 0;  
}  
