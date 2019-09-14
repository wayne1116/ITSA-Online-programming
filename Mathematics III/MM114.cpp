#include<stdio.h>    
#include<stdlib.h>    
int main()    
{    
  int a, i, j, k, number;    
    while(scanf("%d", &a)!=EOF){    
       for(i=0; i<a; i++){    
         scanf("%d", &number);    
          for(j=0; j<number-1; j++){    
              printf("¡@");    
           }    
          printf("¡¯\n");    
         for(j=2; j<number; j++){    
                for(k=0; k<number-j; k++){    
                  printf("¡@");    
               }    
              printf("¡¯");    
               for(k=0; k<(j-1)*2-1; k++){    
                 printf("¡@");    
               }    
              printf("¡¯\n");    
         }    
          for(j=0; j<number*2-1; j++){    
                printf("¡¯");    
           }    
          printf("\n");    
      }    
  }    
  return 0;    
}  
