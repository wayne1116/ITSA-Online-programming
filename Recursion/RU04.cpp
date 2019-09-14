#include<stdio.h>  
#include<stdlib.h>  
#define swap(x,y,z) ((z)=(x), (x)=(y), (y)=(z))  
int main()  
{  
    long a, i, j, k, power, su[3], le[3], temp, state, result;  
    scanf("%ld", &a);  
    for(i=0; i<a; i++){  
        scanf("%ld %ld %ld %ld %ld %ld %ld", &power, &su[0], &su[1], &su[2], &le[0], &le[1], &le[2]);  
        for(j=0; j<2; j++){  
            for(k=0; k<2; k++){  
                if(le[k]>le[k+1]){  
                    swap(su[k], su[k+1], temp);  
                    swap(le[k], le[k+1], temp);  
                }  
            }  
        }  
        state=0;  
        for(j=0; j<=su[0]; j++){  
            result=j*le[0];  
            for(k=0; k<=su[1]; k++){  
                result+=k*le[1];  
                temp=(power-result);  
                if(temp<0){  
                    break;  
                }  
                else{  
                    if(le[2]>0){  
                        if(temp%le[2]==0 && temp/le[2]<=su[2]){  
                            state=1;  
                            break;  
                        }  
                    }  
                    else{  
                        if(temp==0){  
                            state=1;  
                            break;  
                        }  
                    }  
                }  
                result-=k*le[1];  
            }  
            if(state){  
                break;  
            }  
        }  
        if(state){  
            printf("yes\n");  
        }  
        else{  
            printf("no\n");  
        }  
              
    }  
    return 0;  
}  
