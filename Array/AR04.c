#include<stdio.h> 
#include<stdlib.h> 
#include<string.h> 

int main() 
{ 
    int a; 
    int start; 
    int spac; 
    int sum; 
    int tmp; 
    int totalsum;
    int count=0;
    int i, j, k; 
 
    scanf("%d", &a);
    totalsum=0;
    for(i=1; i<=a; i++) totalsum+=2*i-1;
    totalsum*=2;   
    sum=2*a-2;
    start=1;
    for(i=1; i<=a; i++){ // height
        tmp=start;
        count=0;
        for(j=0; j<sum; j++, count++) printf(" ");
        spac=(a-i)*4;
        for(j=1; j<=i; j++){ // number of  pyramids
            for(k=0; k<tmp; k++, count+=2) printf(" x");
            if(j!=i) for(k=0; k<spac; k++, count++) printf(" ");
            tmp-=2;
        }
        for(j=count; j<totalsum; j++) printf(" ");
        sum-=2;
        start+=2;
        printf("\n");    
    }
    return 0; 
}  
