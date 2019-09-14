#include<stdio.h>  
#include<stdlib.h>  
#include<ctype.h>  
#include<math.h>  
void pro(short *a, char b, int c, int d)  
{  
    int temp1, i, j;  
    if(isalpha(b)){  
            temp1=b-65+10; i=c;  
            while(temp1>0){  
                a[i]=temp1%2;  
                i--; temp1/=2;  
            }  
            for(j=i; j>=d; j--){  
                a[j]=0;  
            }  
    }  
    else{  
            temp1=b-48; i=c;  
            while(temp1>0){  
                a[i]=temp1%2;  
                i--; temp1/=2;  
            }  
            for(j=i; j>=d; j--){  
                a[j]=0;  
            }  
    }  
}  
void result(short *a)  
{  
    int i, j, k, temp=0, temp1=0, te;  
    for(i=3, j=0; i>=0; i--, j++){  
        if(a[i]==1){  
                te=1;  
                for(k=0; k<j; k++){  
                    te*=2;  
                }  
                temp+=te;  
        }  
    }  
    for(i=7, j=0; i>=4; i--, j++){  
        if(a[i]==1){  
            te=1;  
            for(k=0; k<j; k++){  
                te*=2;  
            }  
            temp1+=te;  
        }  
    }  
    if(temp>=10){  
        printf("%c", temp+55);  
    }  
    else{  
        printf("%d", temp);  
    }  
    if(temp1>=10){  
        printf("%c", temp1+55);  
    }  
    else{  
        printf("%d", temp1);  
    }  
}  
int main()  
{  
    short temp[8], number[512][8];  
    int total, i, j;  
    char *ptr, line[1024], ch1, ch2;  
    while(fgets(line,1024,stdin)!=NULL){  
        if(line[0]=='\n'){  
            break;  
        }  
        ptr=line; total=0;  
        while(*ptr){  
            if(*ptr==' '){  
                    ptr++; ch1=*ptr;  
                    ptr++; ch2=*ptr;  
                    pro(number[total], ch1, 3, 0);  
                    pro(number[total], ch2, 7, 4);  
                    total++;  
            }  
            ptr++;  
        }  
        if(line[0]=='D'){  
            result(number[0]);  
            for(i=0; i<total-1; i++){  
                printf(" ");  
                for(j=0; j<8; j++){  
                    if(number[i][j]!=number[i+1][j]){  
                        temp[j]=1;  
                    }  
                    else{  
                        temp[j]=0;  
                    }  
                }  
                result(temp);  
            }  
            printf("\n");  
        }  
        else{  
            for(i=0; i<8; i++){  
                temp[i]=0;  
            }  
            for(i=0; i<total; i++){  
                if(i>0){  
                    printf(" ");  
                }  
                for(j=0; j<8; j++){  
                    if(temp[j]!=number[i][j]){  
                        temp[j]=1;  
                    }  
                    else{  
                        temp[j]=0;  
                    }  
                }  
                result(temp);  
            }  
            printf("\n");  
        }  
    }  
    return 0;  
}  
