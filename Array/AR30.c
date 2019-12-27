#include<stdio.h>  
#include<stdlib.h>  
int main()  
{  
    int a, b, i, j, k, l, temp, number[1024], state, result;  
    while(scanf("%d", &a)!=EOF){  
        for(i=0; i<a; i++){  
            scanf("%d", &b);  
            for(j=0; j<b; j++){  
                scanf("%d", &number[j]);  
            }  
            result=0;  
            for(j=0; j<b; j++){  
                temp=number[j];  
                for(k=b-1; k>=0; k--){  
                    if(temp>number[k]){  
                        break;  
                    }  
                }  
                state=0;  
                for(l=k; l>=0; l--){  
                    if(temp<number[l]){  
                        state=1;  
                        break;  
                    }  
                }  
                if(state){  
                    result++;  
                }  
            }  
            printf("%d\n", result);  
        }  
    }  
    return 0;  
 }  
