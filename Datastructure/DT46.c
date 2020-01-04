#include<stdio.h> 
#include<stdlib.h> 
#include<ctype.h> 
#include<string.h> 
int priority(char c) 
{ 
    switch(c){ 
        case '(': return 20; 
        case '-':  
        case '+': return 22; 
        case '/':  
        case '*': return 24; 
    } 
    return 0; 
} 
int main() 
{ 
    int i, v1, v2; 
    int len; 
    int top=-1; 
    char line[1024]; 
    char stack[1024]; 
    scanf("%s", line); 
    len=strlen(line); 
    for(i=0; i<len; i++){ 
        if(line[i]=='#') break; 
        if(isalpha(line[i])) printf("%c", line[i]); 
        else if(line[i]==')'){ 
            while(stack[top]!='(') printf("%c", stack[top--]); 
            --top; 
        } 
        else if(line[i]=='(') stack[++top]='('; 
        else{ 
            v1=priority(line[i]); 
            while(top>=0){ 
                v2=priority(stack[top]); 
                if(v2>=v1) printf("%c", stack[top--]); 
                else break; 
            } 
            stack[++top]=line[i]; 
        } 
    } 
    while(top>=0) printf("%c", stack[top--]); 
    printf("\n"); 
    return 0; 
}  
