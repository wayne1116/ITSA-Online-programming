    #include<stdio.h>  
    #include<stdlib.h>  
    int main()  
    {  
        int a, b, i, j, index=0, result, max;  
        int query[15], number[3000][15];  
        while(scanf("%d%d", &a, &b)!=EOF){  
            for(i=0; i<b; i++){  
                scanf("%d", &query[i]);  
            }  
            for(i=0; i<a; i++){  
                for(j=0; j<b; j++){  
                    scanf("%d", &number[i][j]);  
                }  
            }  
            max=2147483647;  
            for(i=0; i<a; i++){  
                result=0;  
                for(j=0; j<b; j++){  
                    result+=(number[i][j]-query[j])*(number[i][j]-query[j]);  
                }  
                if(result<max){  
                    max=result;  
                    index=i;  
                }  
            }  
            for(i=0; i<b-1; i++){  
                printf("%d ", number[index][i]);  
            }  
            printf("%d\n", number[index][i]);  
        }  
        return 0;  
    }  
