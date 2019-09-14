#include<stdio.h>  
#include<stdlib.h>  
char s[5000001];  
int main()  
{  
    char *ptr;  
    int a=0, i=0;  
    int count1=0, count0=0;  
      
    scanf("%d", &a);  
    for(i=0; i<a; ++i){  
        scanf("%s", s);  
        ptr=s;  
        count1=count0=0;  
        while(*ptr){  
            if(*ptr=='0'){  
                count0++;  
                if(count1>0)  
                    count1--;  
            }  
            else{  
                count1++;  
            }  
            ptr++;  
        }  
        printf("%d\n", count0+count1);  
    }  
    return 0;  
}  
