#include<stdio.h>  
#include<stdlib.h>  
int main()  
{  
    char gray[1024];  
    int a, result, i, j, state;  
    while(scanf("%d", &a)!=EOF){  
        for(i=0; i<a; i++){  
            gray[i]='0';  
        }  
        gray[i]='\0'; result=1;  
        printf("%s\n", gray);  
        for(i=0; i<a; i++){  
            result*=2;  
        }  
        state=0;  
        for(i=1; i<result; i++){  
            if(i%2==1){  
                if(!state){  
                    gray[a-1]='1';  
                    state=1;  
                }  
                else{  
                    gray[a-1]='0';  
                    state=0;  
                }  
            }  
            else{  
                for(j=a-1; j>=0; j--){  
                    if(gray[j]=='1'){  
                        break;  
                    }  
                }  
                if(gray[j-1]=='0'){  
                    gray[j-1]='1';  
                }  
                else{  
                    gray[j-1]='0';  
                }  
            }  
            printf("%s\n", gray);  
        }  
    }  
    return 0;  
}  
