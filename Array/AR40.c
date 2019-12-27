#include<stdio.h>   
#include<stdlib.h>   
int main()   
{   
  int a, i, start, number, result, total, result1, result2;   
    while(scanf("%d", &a)!=EOF){   
       start=0; total=0;   
      for(i=0; i<a; i++){   
         scanf("%d", &number);   
         result1=(number-start);  
         result2=(start-number);  
         if(result1<0){  
            result1+=10;  
         }  
         if(result2<0){  
            result2+=10;  
         }  
         result=result1>result2?result2:result1;  
         total+=(result)*36; start=number;  
      }   
      printf("Minimal summation of swinging degrees is %d\n", total);   
    }   
}  
