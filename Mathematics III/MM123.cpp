#include<stdio.h>  
#include<stdlib.h>  
int main()  
{  
    int a, i, j, k, *result, number;  
     while(scanf("%d", &a)!=EOF){  
        for(i=0; i<a; i++){  
            scanf("%d", &number);  
            result=(int *)calloc(100, sizeof(int));  
            result[0]=1;  
            for(j=2; j<=number; j++){  
                for(k=0; k<100; k++){  
                    result[k]*=j;  
                 }  
                 for(k=0; k<100; k++){  
                    if(result[k]>=10000){  
                        result[k+1]+=result[k]/10000;  
                        result[k]=result[k]%10000;  
                     }  
                 }  
            }  
            for(j=99; j>=0; j--){  
                if(result[j]!=0){  
                    break;  
                }  
            }  
            printf("%d", result[j]);  
            for(k=j-1; k>=0; k--){  
                if(result[k]>=1000){  
                    printf("%d", result[k]);  
                }  
                else if(result[k]>=100){  
                    printf("0%d", result[k]);  
                }  
                else if(result[k]>=10){  
                    printf("00%d", result[k]);  
                }  
                else{  
                    printf("000%d", result[k]);  
                }  
            }  
            printf("\n");  
            free(result);  
         }  
     }  
     return 0;   
}  
