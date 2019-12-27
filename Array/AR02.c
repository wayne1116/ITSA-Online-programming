#include<stdio.h>  
#include<stdlib.h>  
int main()  
{  
    int a[3], d, i, j, k, temp[64], result[64], number;  
    while(scanf("%d%d%d%d", &a[0], &a[1], &a[2], &d)!=EOF){  
        result[0]=a[0]; result[1]=a[1]; result[2]=a[2]; number=3;  
        for(i=0; i<64; i++){  
            temp[i]=0;  
        }  
        for(i=0; i<d-1; i++){  
            for(j=0; j<3; j++){  
                for(k=0; k<number; k++){  
                    temp[j+k]+=result[k]*a[j];  
                }  
            }  
            number+=2;  
            for(j=0; j<number; j++){  
                result[j]=temp[j];  
            }  
            for(j=0; j<64; j++){  
                temp[j]=0;  
            }  
        }  
        for(i=0; i<number-1; i++){  
            printf("%d ", result[i]);  
        }  
        printf("%d\n", result[i]);  
    }  
    return 0;  
}  
