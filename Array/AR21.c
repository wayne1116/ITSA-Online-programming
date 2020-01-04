#include<stdio.h> 
#include<stdlib.h> 
#include<string.h> 
#define MAX_LEN 4096 
int tmp[MAX_LEN]; 
int number[MAX_LEN]; 
int main() 
{ 
    int i, j;  
    int carry=0; 
    int len;
    char line[32]; 
    memset(number, 0, sizeof(number)); 
    while(scanf("%s", line)!=EOF && !(line[0]=='0' && strlen(line)==1)){  
        memset(tmp, 0, sizeof(tmp)); 
        len=strlen(line);
        for(i=len-1, j=0; i>=0; i--){ 
            if(line[i]>='0'&&line[i]<='9'){ 
                tmp[j]=line[i]-48; 
                ++j; 
            } 
        } 
        carry=0; 
        for(i=0; i<MAX_LEN; i++){ 
            number[i]=number[i]+tmp[i]+carry; 
            carry=number[i]/10; 
            number[i]%=10; 
        }   
    } 
    for(i=MAX_LEN-1; i>0; i--) if(number[i]!=0) break;           
    for(j=i; j>=0; j--) printf("%d", number[j]); 
    printf("\n"); 
    return 0; 
}  
