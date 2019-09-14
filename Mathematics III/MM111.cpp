#include<stdio.h>  
#include<stdlib.h>  
short *pro(char *ptr)  
{  
    int i=0, number, count;  
    short *result;  
    result=(short *)calloc(33, sizeof(short));  
    number=atoi(ptr);  
    while(number>0){  
        result[i++]=number%2;  
        number/=2;   
    }   
    i=8; count=2;  
    while(*ptr){  
        if(*ptr=='.'){  
            ptr++;  
            number=atoi(ptr);  
            while(number>0){  
                result[i++]=number%2;  
                number/=2;  
            }  
            i=8*count;  
            count++;  
        }  
        ptr++;  
    }  
    return result;  
}  
int main()  
{  
    char line1[1024], line2[1024], *ptr;  
    int a, i, j, number, state;  
    short *sample1, *sample2, *mask;  
    while(scanf("%d", &a)!=EOF){  
        scanf("%s %s", line1, line2);  
        sample1=pro(line1); mask=pro(line2);  
        for(i=0; i<a; i++){  
            scanf("%s", line1);  
            ptr=line1; state=0;  
            while(*ptr){  
                if(*ptr=='.'){  
                    ptr++;  
                    number=atoi(ptr);  
                    if(number>255 || number<0){  
                        state=1;  
                        break;  
                    }  
                }  
                ptr++;  
            }  
            if(state==1){  
                printf("Invalid IP\n");  
            }  
            else{  
                sample2=pro(line1);  
                for(j=0; j<32; j++){  
                    if(mask[j]==1 && sample1[j]!=sample2[j]){  
                        printf("False\n");  
                        break;  
                    }  
                }  
                if(j==32){  
                    printf("True\n");  
                }  
            }  
        }  
    }  
    return 0;  
}  
