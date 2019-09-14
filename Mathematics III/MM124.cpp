#include<stdio.h>  
#include<stdlib.h>  
#include<string.h>  
#include<math.h>  
int main()  
{  
    char line[1024];  
    int i, j, len, result, mul;  
    while(scanf("%s", line)!=EOF){  
        if(line[0]=='#'){  
            break;  
        }   
        len=strlen(line); result=0;  
        for(i=0; i<len; i++){  
            if(line[i]!=0){  
                for(j=0, mul=1; j<len-1-i; j++){  
                    mul*=3;  
                }  
                result+=mul*(line[i]-48);  
            }  
        }  
        if(result==1){  
            printf("0\n");  
        }  
        else{  
            for(i=2; i<=sqrt(result); i++){  
                if(result%i==0){  
                    printf("0\n");  
                    break;  
                }  
            }  
            if(i>sqrt(result)){  
                printf("-1\n");  
            }  
        }  
    }  
    return 0;  
}  
