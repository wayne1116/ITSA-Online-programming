#include<stdio.h>  
#include<stdlib.h>  
#include<string.h>  
int main()  
{  
    int len, i, j, a;  
    float count0, count1, total0, total1;  
    char line1[1024], line2[1024];  
    while(scanf("%d", &a)!=EOF){  
        for(j=0; j<a; j++){  
        scanf("%s", line1);  
        scanf("%s", line2);  
        len=strlen(line1);  
        count0=count1=0;  
        total0=total1=0;  
        for(i=0; i<len; i++){  
            if(line1[i]=='1' && line1[i]==line2[i]){  
                count1++;  
            }  
            if(line2[i]=='1'){  
                total1++;  
            }  
        }  
        for(i=0; i<len; i++){  
            if(line1[i]==line2[i] && line2[i]=='1'){  
                count0++;  
            }  
            if(line1[i]=='1'){  
                total0++;  
            }  
        }  
        printf("%.2f %.2f\n", count1/total1, count0/total0);  
        }  
    }  
    return 0;  
}  
