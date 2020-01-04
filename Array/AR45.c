#include<stdio.h> 
#include<stdlib.h> 
#include<string.h> 
#define MAXLINE 1024 
char token[]={" !,.:;?"}; 
int check(int v) 
{ 
    int i=0; 
    if(v>='A'&&v<='Z' || v>='a'&&v<='z'){
        printf("%c", v);
        return 1;
    } 
    for(i=0; i<sizeof(token); i++){ 
        if(token[i]==v){ 
            printf("%c", v); 
            return 1;
        } 
    } 
    return 0;
} 
int main() 
{ 
    int i=0; 
    int len=0; 
    int v=0; 
    char line[MAXLINE];
    short flag; 
    while(fgets(line, MAXLINE, stdin)!=NULL){ 
        len=strlen(line);
        flag=1; 
        for(i=0; i<len; i++){
            if(line[i]!='\r' && line[i]!='\n' && (line[i]<'0' || line[i]>'9')){
                flag=0;
                break;
            }
        }
        if(flag){ 
            for(i=len-1; i>=0; i--){ 
                if(line[i]!='\n' && line[i]!='\r'){ 
                    v=v*10+line[i]-48; 
                    //printf("%d\n", v); 
                    if(check(v)) v=0; 
                } 
            } 
        } 
        else{ 
            for(i=len-1; i>=0; i--){ 
                if(line[i]!='\n' && line[i]!='\r'){ 
                    v=line[i]; 
                    while(v>0){ 
                        printf("%d", v%10); 
                        v/=10; 
                    } 
                } 
            } 
        } 
        printf("\n"); 
    } 
  return 0; 
}  
