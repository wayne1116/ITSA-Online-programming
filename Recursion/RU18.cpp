#include<stdio.h>  
#include<stdlib.h>  
#include<math.h>  
int count;  
void rec(int a)  
{  
    if(a==1 || a==0)  
        return;  
    else{  
        count++;  
        if(a%2==0)  
            rec(a/2);  
        else  
            rec((a+1)/2);  
    }  
}  
int main()  
{  
    char line[128];  
    double result;  
    int i, j, a, result1, total[16];  
    while(scanf("%s", line)!=EOF){  
        result=0;  
        for(i=0, j=7; i<8; i++, j--){  
            if(line[i]=='1'){  
                result+=pow(2,j);  
            }  
        }  
        result1=result;  
        count=0;  
        for(i=2; i<=result1; i++){  
            rec(i);  
        }  
        for(i=0; i<11; i++){  
            total[i]=count%2;  
            count/=2;  
        }  
        for(i=10; i>=0; i--)  
            printf("%d", total[i]);  
        printf("\n");  
        scanf("%d", &a);  
        if(a==-1)  
            break;  
    }  
    return 0;  
}  
