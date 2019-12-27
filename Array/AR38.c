#include<stdio.h>  
#include<stdlib.h>  
#include<string.h>  
int min(int a, int b)  
{  
        return a>b?b:a;  
}  
int main()  
{  
        int a;  
        int n;  
        int m;  
        int k;  
        int i;  
        int num;  
        int result;  
        int count[1024];  
        scanf("%d", &a);  
        while(a--){  
            scanf("%d%d%d", &n, &m, &k);  
            memset(count, 0, sizeof(count));  
            for(i=0; i<n; i++){  
                scanf("%d", &num);  
                ++count[num];  
            }  
          
            result=0;  
            for(i=0; i<k/2; i++){  
                result+=min(count[i], count[k-i]);  
            }  
            if(k/2+k/2==k) result+=(count[k/2]/2);  
            else if(k!=1) result+=min(count[i], count[k-i]);  
            printf("%d\n", result);  
        }  
        return 0;  
}  
