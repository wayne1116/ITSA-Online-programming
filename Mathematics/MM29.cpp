#include<stdio.h>  
#include<stdlib.h>  
#include<string.h>  
#include<ctype.h>  
#define SWAP(x, y, z) ((z)=(x), (x)=(y), (y)=(z))  
int main()  
{  
    int *number1, *number2, *result, len1, len2, Len1, Len2, sign1, sign2, carry, *temp, temp1, i, j;  
    char line1[1024], line2[1024], *ptr1, *ptr;  
    while(scanf("%s%s", line1, line2)!=EOF){  
        if(line1[0]=='0' && line2[0]=='0'){  
            break;  
        }  
        if(line1[0]=='0' || line2[0]=='0'){  
            printf("0\n");  
        }  
        else{  
        len1=strlen(line1); len2=strlen(line2);  
        ptr1=&line1[len1-1]; ptr=line1;  
        Len1=0; sign1=0; number1=(int *)malloc(len1*sizeof(int));  
        while(ptr1!=ptr){  
            number1[Len1++]=*ptr1-48;  
            ptr1--;  
        }  
        if(isdigit(*ptr)){  
            number1[Len1++]=*ptr-48;  
        }  
        else{  
            sign1=1;  
        }  
        ptr1=&line2[len2-1]; ptr=line2;  
        Len2=0; sign2=0; number2=(int *)malloc(len2*sizeof(int));  
        while(ptr!=ptr1){  
            number2[Len2++]=*ptr1-48;  
            ptr1--;  
        }  
        if(isdigit(*ptr)){  
            number2[Len2++]=*ptr-48;  
        }  
        else{  
            sign2=1;  
        }  
        if(Len1<Len2){  
            SWAP(number1, number2, temp);  
            SWAP(Len1, Len2, temp1);  
        }  
        result=(int *)calloc(1024, sizeof(int));  
        for(i=0; i<Len2; i++){  
            for(j=0; j<Len1; j++){  
                result[i+j]+=number1[j]*number2[i];  
            }  
        }  
        carry=0;  
        for(i=0; i<Len1+Len2; i++){  
            if(result[i]>=10){  
                carry=result[i]/10;  
                result[i+1]+=carry;  
                result[i]=result[i]%10;  
            }  
            else{  
                carry=0;  
            }  
        }  
        for(j=i; j>=0; j--){  
            if(result[j]>0){  
                break;  
            }  
        }  
        if(sign1+sign2==1){  
            printf("-");  
        }  
        for(i=j; i>=0; i--){  
            printf("%d", result[i]);  
        }  
        printf("\n");  
        free(number1); free(number2); free(result);  
        }  
     }  
    return 0;  
}  
