#include<stdio.h>   
#include<stdlib.h>   
#include<string.h>   
int main()   
{   
    int a;   
    int i;   
    int j;   
    int k;   
    int len1;   
    int len2;   
    int diff;   
    char line1[128];   
    char line2[128];   
   
    scanf("%d", &a);   
    while(a--){   
        scanf("%s %s", line1, line2);   
        len1=strlen(line1);   
        len2=strlen(line2);   
        if(len1==len2){   
            for(i=0; i<len1; i++) printf("%c%c", line1[i], line2[i]);   
        }   
        else if(len1>len2){   
            diff=len1-len2;   
            i=0;   
            while(diff--){   
                printf("%c0", line1[i++]);   
            }   
            for(j=i, k=0; j<len1; j++, k++) printf("%c%c", line1[j], line2[k]);   
        }   
        else{   
            diff=len2-len1-1;   
            i=0;   
            while(diff--){   
                printf("%c0", line2[i++]);   
            }   
            printf("%c", line2[i++]);   
            for(j=i, k=0; j<len2; j++, k++) printf("%c%c", line1[k], line2[j]);   
        }   
        printf("\n");   
    }   
    return 0;   
}  
