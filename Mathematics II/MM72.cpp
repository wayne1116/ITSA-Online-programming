#include<stdio.h>  
#include<stdlib.h>  
int main()  
{  
    int ID, number;  
    float cost;  
    while(scanf("%d %d %f", &ID, &number, &cost)!=EOF){  
        printf("%d %d %.2f %.2f %.2f\n", ID, number, cost, cost*number, cost*number*0.12);  
    }  
    return 0;  
}  
