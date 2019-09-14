#include<stdio.h>  
#include<stdlib.h>  
int main()  
{  
    int a, i, j, k, count, line[100][100], state;  
    while(scanf("%d", &a)!=EOF){  
        if(a==0)  
            break;  
        for(i=0; i<a; i++){  
            for(j=0; j<a; j++){  
                line[i][j]=0;  
            }  
        }  
        for(i=0; i<a-1; i++){  
            for(j=i+1; j<a; j++){  
                scanf("%d", &line[i][j]);  
                line[j][i]=line[i][j];  
            }  
        }  
        count=0;  
        for(i=0; i<a-1; i++){  
            for(j=i+1; j<a; j++){  
                if(line[i][j]==1){  
                    state=1;  
                    for(k=0; k<a; k++){  
                        if(line[j][k]==1 && line[k][i]==1){  
                            state=0;  
                            break;  
                        }  
                    }  
                    if(state){  
                        count++;  
                    }  
                }  
            }  
        }  
        printf("%d\n", count);  
    }  
    return 0;  
}  
