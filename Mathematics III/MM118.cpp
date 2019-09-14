#include<stdio.h>  
#include<stdlib.h>  
#include<string.h>  
int main()  
{  
    int a, i, j, k, count, len, *result;  
    char *ptr, *ptr1, line[1024];  
    while(scanf("%d", &a)!=EOF){  
        for(i=0; i<a; i++){  
            scanf("%s", line);  
            len=strlen(line);  
            ptr=line; ptr1=&line[len];  
            result=(int *)calloc(100, sizeof(int));  
            count=0; j=0;  
            while(ptr1!=ptr){  
                if(count==4){  
                    result[j++]=atoi(ptr1);  
                    *ptr1='\0'; count=0;  
                }  
                ptr1--; count++;  
            }  
            result[j++]=atoi(ptr1);  
            for(k=j-1; k>0; k--){  
                result[k-1]+=(result[k]%13)*10000;  
            }  
            if(result[0]%13!=0){  
                printf("false\n");  
            }  
            else{  
                printf("true\n");  
            }  
            free(result);  
        }  
    }  
    return 0;  
}  
