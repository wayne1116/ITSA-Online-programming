#include<stdio.h>  
#include<stdlib.h>  
#define OUT 0  
#define IN  1  
int main()  
{  
    int a, i, j, f, d, p, x, day, state;  
    while(scanf("%d", &a)!=EOF){  
        for(i=0; i<a; i++){  
            scanf("%d %d %d %d", &f, &d, &p, &x);  
            day=0; state=OUT;  
            for(j=1; j<=f; j++){  
                day++;  
                d-=x;  
                if(d==0){  
                    state=IN;  
                    break;  
                }  
                else if(d<0){  
                    day--;  
                    state=IN;  
                    break;  
                }  
                  
            }  
            if(state==IN){  
                printf("%d\n", day);  
            }  
            else{  
                while(d>0){  
                    day++;  
                    d=d-x-p;  
                    if(d==0){  
                        break;  
                    }  
                    else if(d<0){  
                        day--;  
                        break;  
                    }  
                }  
                printf("%d\n", day);  
            }  
        }  
    }  
    return 0;  
 }  
