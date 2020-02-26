#include<stdio.h>  
#include<stdlib.h>  
#include<string.h>  
int main()  
{  
    char line1[512], line2[512];  
    int len1=0, len2=0, cont=0;  
    int i=0, j=0;  
    int length[512][512];  
    while(scanf("%s%s", line1, line2)!=EOF){  
        len1=strlen(line1);  
        len2=strlen(line2);  
        for(i=0; i<=len1; i++) length[0][i]=0;  
        for(i=0; i<=len2; i++) length[i][0]=0;  
          
        for(i=1; i<=len2; i++){  
            for(j=1; j<=len1; j++){  
                if(line1[j-1]==line2[i-1]) length[i][j]=length[i-1][j-1]+1;  
                else if(length[i-1][j]>length[i][j-1]) length[i][j]=length[i-1][j];  
                else length[i][j]=length[i][j-1];  
            }  
        }  
        printf("%d\n", length[len2][len1]);  
    }  
    return 0;     
}  
