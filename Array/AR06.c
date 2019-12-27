#include<stdio.h>  
#include<stdlib.h>  
int main()  
{  
    int a, i, j, k, state1[100], state2[100], match[100][100], max, boy=0, girl=0;  
    while(scanf("%d", &a)!=EOF){  
        for(i=0; i<a; i++){  
            for(j=0; j<a; j++){  
                scanf("%d", &match[i][j]);  
            }  
        }  
        for(i=0; i<a; i++){  
            state1[i]=state2[i]=0;  
        }  
        for(i=0; i<a; i++){  
            max=-1;  
            for(j=0; j<a; j++){  
                for(k=0; k<a; k++){  
                    if(max<match[j][k] && (!state1[j] && !state2[k])){  
                        max=match[j][k]; boy=j; girl=k;  
                    }  
                }  
            }  
            printf("boy %d pair with girl %d\n", boy+1, girl+1);  
            state1[boy]=state2[girl]=1;  
        }  
    }  
    return 0;  
}  
