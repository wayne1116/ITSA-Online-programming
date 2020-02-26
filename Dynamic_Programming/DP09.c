#include<stdio.h>  
#include<stdlib.h>  
#define Max(x,y) (x>y?x:y)  
int main()  
{  
    int a=0;  
    int i=0;  
    int number[512];  
    int max[512];  
    while(scanf("%d", &a)!=EOF){  
        if(a==0)  
            break;  
        for(i=1; i<=a; i++)  
            scanf("%d", &number[i]);  
          
        max[0]=0;  
        max[1]=number[1];  
        for(i=2; i<=a; i++)  
            max[i]=Max(max[i-1], max[i-2]+number[i]);  
        printf("%d\n", max[a]);  
    }     
    return 0;  
}  
