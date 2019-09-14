#include<stdio.h>  
#include<stdlib.h>  
int result, count;  
void rec(int loop, int a, int b)  
{  
    int i, j;  
    if(loop==a){  
        for(j=1; j<=6; j++){  
            if(result+j>=b){  
                count++;  
            }  
        }  
    }  
    else{  
        for(i=1; i<=6; i++){  
            result+=i;  
            rec(loop+1, a, b);  
            result-=i;  
        }  
    }  
}  
int gcd(int a, int b)  
{  
    if(b==0){  
        return a;  
    }  
    return gcd(b,a%b);  
}  
int main()  
{  
    int a, b, total, i, com;  
    while(scanf("%d%d", &a, &b)!=EOF){  
        if(a==0 && b==0){  
            break;  
        }  
        result=count=0;  
        rec(1,a,b);  
        total=1;  
        for(i=0; i<a; i++){  
            total*=6;  
        }  
        if(count==0){  
            printf("0\n");  
        }  
        else if(count==total){  
            printf("1\n");  
        }  
        else{  
            com=gcd(count ,total);  
            printf("%d/%d\n", count/com, total/com);  
        }  
    }  
    return 0;  
}  
