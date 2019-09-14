#include<stdio.h>  
#include<stdlib.h>  
#define SWAP(x,y,z) ((z)=(x), (x)=(y), (y)=(z))  
int main()  
{  
    long a, total, i, j, k, l, temp, number[5000][15], query[15], result[5000];  
    while(scanf("%ld%ld", &a, &total)!=EOF){  
        for(i=0; i<total; i++){  
            scanf("%ld", &query[i]);  
        }  
        for(i=0; i<a; i++){  
            temp=0;  
            for(j=0; j<total; j++){  
                scanf("%ld", &number[i][j]);  
                temp+=(number[i][j]-query[j])*(number[i][j]-query[j]);  
            }  
            result[i]=temp;  
        }  
        for(i=0; i<a-1; i++){  
            for(j=0; j<a-1-i; j++){  
                if(result[j]>result[j+1]){  
                    for(k=0; k<total; k++){  
                        SWAP(number[j][k], number[j+1][k], temp);  
                    }  
                    SWAP(result[j], result[j+1], temp);  
                }  
                else if(result[j]==result[j+1]){  
                    for(k=0; k<total; k++){  
                        if(number[j][k]>number[j+1][k]){  
                            for(l=k; l<total; l++){  
                                SWAP(number[j][l], number[j+1][l], temp);  
                            }  
                            break;  
                        }  
                    }  
                }  
            }  
        }  
        for(i=0; i<5; i++){  
            for(j=0; j<total-1; j++){  
                printf("%ld ", number[i][j]);  
            }  
            printf("%ld\n", number[i][j]);  
        }  
    }  
    return 0;  
}  
