#include<stdio.h>    
#include<stdlib.h>    
int main()    
{    
    char gray[1024];    
    int a, result, i, j, state, flag, b;
    
    while(scanf("%d%d", &a, &b)!=EOF){    
        for(i=0; i<a; i++){    
            gray[i]='0';    
        }    
        
        gray[i]='\0';  
        state=0;    
        for(i=1; i<=b; i++){    
            if(i%2==1){    
                if(!state){    
                    gray[a-1]='1';    
                    state=1;    
                }    
                else{    
                    gray[a-1]='0';    
                    state=0;    
                }    
            } else{    
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
        }    
        
        printf("%s\n", gray);  
        scanf("%d", &flag);  
        if(flag==-1)  
            break;  
    }    
    return 0;    
}  
