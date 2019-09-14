#include<stdio.h>  
#include<stdlib.h>  
int main()  
{  
    float c;  
    while(scanf("%f", &c)!=EOF){  
        printf("Fahrenheit = %.2f\n", 9.0*c/5.0+32.0);  
        printf("Absolute temperature = %.2f\n", c+273.15);  
    }  
    return 0;  
}  
