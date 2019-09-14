#include<stdio.h>          
main() {  
    int L, A[101] = {0}, number, i;  
    while(scanf("%d", &number)!=EOF) {  
        for(i=0; i<number; i++){  
        scanf("%d", &L);  
        int DP[101][101] = {}, a, b, c, d, temp, n;  
        for(n = 1; ; n++){  
            scanf("%d", &temp);  
            if(temp==0)  
                break;  
            A[n]=temp;  
        }  
        A[n] = L;  
        for(a = 2; a <= n; a++) {  
            for(b= 0, c= a+b; c <= n; b++, c++) {  
                int min = 2147483647, t;  
                for(d = b+1; d < c; d++) {  
                    t = DP[b][d] + DP[d][c] + A[c] - A[b];  
                    if(min > t)    min = t;  
                }  
                DP[b][c] = min;  
            }  
        }  
        printf("%d\n", DP[0][n]);  
        }  
    }  
    return 0;  
}  
