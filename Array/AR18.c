#include<stdio.h>  
#include<stdlib.h>  
int length;  
int *pro(char *line, int len)  
{  
    char *ptr=&line[len], *ptr1=line, *temp;  
    int *result, j;  
    result=(int *)calloc(1024, sizeof(int));  
    temp=ptr; length=0;  
    while(ptr1!=ptr){  
        for(j=0; j<4 && ptr!=ptr1; j++){      
            ptr--;      
        }      
        if(ptr==ptr1){      
            break;      
        }      
        *(ptr+4)='\0';      
        result[length++]=atoi(ptr);      
        temp=ptr;      
    }  
    *temp='\0'; result[length++]=atoi(ptr);  
    return result;  
}  
int main()  
{  
    char line1[1024], line2[1024];  
    int *result1, *result2, *result, i, j, k, carry, a, len, len1;  
    while(scanf("%d", &a)!=EOF){  
        for(i=0; i<a; i++){  
            scanf("%d%s%s", &len, line1, line2);  
            result1=pro(line1, len);  
            result2=pro(line2, len);  
            len1=length; result=(int *)calloc(1024, sizeof(int));  
            for(j=0; j<len1; j++){  
                for(k=0; k<len1; k++){  
                    result[j+k]+=(result1[j]*result2[k]);  
                }  
            }     
            carry=0;  
            for(j=0; j<1024; j++){  
                result[j]+=carry;  
                if(result[j]>=10000){  
                    carry=result[j]/10000;  
                    result[j]=result[j]%10000;  
                }  
                else{  
                    carry=0;  
                }  
            }  
            for(j=1024; j>=0; j--){  
                if(result[j]>0){  
                    break;  
                }  
            }  
            printf("%d", result[j]);  
            for(k=j-1; k>=0; k--){  
                if(result[k]>=1000){      
                    printf("%d", result[k]);      
                }      
                else if(result[k]>=100){      
                    printf("0%d", result[k]);      
                }      
                else if(result[k]>=10){      
                    printf("00%d", result[k]);      
                }      
                else{      
                    printf("000%d", result[k]);      
                }      
            }     
            printf("\n");  
            free(result);  
        }  
    }  
    return 0;  
}  
