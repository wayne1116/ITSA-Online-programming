#include<stdio.h>  
#include<stdlib.h>  
#include<string.h>  
struct node{  
    char chara;  
    int dis;  
};  
int main()  
{  
    struct node lnode[128];  
    char line[1024], *ptr, c;  
    int count, len, pos, state, i, j;  
    while(scanf("%s", line)!=EOF){  
        ptr=line; count=0; len=strlen(line); pos=0;  
        while(*ptr){  
            c=*ptr; state=1;  
            for(i=0; i<count; i++){  
                if(lnode[i].chara==c){  
                    state=0; break;  
                }  
            }  
            if(state){  
                for(j=len-1; j>=0; j--){  
                    if(line[j]==c){  
                        break;  
                    }  
                }  
                lnode[count].chara=c;  
                lnode[count].dis=j-pos;  
                count++;  
            }  
            ptr++; pos++;  
        }  
        for(i=0; i<count-1; i++){  
            printf("%c:%d ", lnode[i].chara, lnode[i].dis);  
        }  
        printf("%c:%d\n", lnode[i].chara, lnode[i].dis);  
    }  
    return 0;  
}  
