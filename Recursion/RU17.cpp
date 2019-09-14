#include<stdio.h>  
#include<stdlib.h>  
#include<math.h>  
int count1;  
void rec(int a)  
{  
    if(a==1 || a==0){  
        return;  
    }  
    else{  
    if(a%2==0){  
        count1++;  
        rec(a/2);  
    }  
    else{  
        count1++;  
        rec((a+1)/2);  
    }  
}  
}  
int main()  
{  
    char line[1024];  
    double result;  
    int result1, i, j, result2[10], a;  
    while(scanf("%s", line)!=EOF){  
        for(i=0, j=7; i<8; i++, j--){  
            if(line[i]=='1'){  
                result+=pow(2, j);  
            }  
        }  
        count1=0; result1=result;  
        rec(result1);  
        for(i=0; i<4; i++){  
            result2[i]=count1%2;  
            count1/=2;  
        }  
        for(i=3; i>=0; i--){  
            printf("%d", result2[i]);  
        }  
        printf("\n");  
        scanf("%d", &a);  
        if(a==-1){  
            break;  
        }  
        result=0;  
    }  
    return 0;  
}  
