#include<stdio.h>  
#include<stdlib.h>  
int cmp(const void *x, const void *y)  
{  
    return *(int *)x-*(int *)y;   
}  
int main()  
{  
    int i=0, number[1024];  
    while(scanf("%d", &number[i])!=EOF){  
        i++;  
    }  
    qsort(number, i, sizeof(int), cmp);  
    printf("%d\n", number[i/2]);  
 }  
