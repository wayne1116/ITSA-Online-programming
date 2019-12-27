#include<stdio.h>  
#include<stdlib.h>  
#include<string.h>  
#include<ctype.h>  
#define SWAP(x, y, z) ((z)=(x), (x)=(y), (y)=(z))  
int main()  
{  
    char line[1024], *ptr, temp;  
    int len, i, number, state;  
    while(fgets(line, 1024, stdin)!=NULL){  
        ptr=line; state=0;  
        while(*ptr){  
            if(*ptr=='\n'){  
                *ptr='\0';  
                break;  
            }  
            else if(!isdigit(*ptr)){  
                state=1;  
            }   
            ptr++;  
        }  
        len=strlen(line);  
        for(i=0; i<(len/2); i++){  
            SWAP(line[i], line[len-1-i], temp);  
        }  
        if(state){  
            for(i=0; i<len; i++){  
                number=line[i];  
                while(number>0){  
                    printf("%d", number%10);  
                    number/=10;  
                }  
            }  
            printf("\n");  
        }  
        else{  
            ptr=line;  
            while(*ptr){  
                temp=*(ptr+3);  
                *(ptr+3)='\0';  
                number=atoi(ptr);  
                if(number<=122){  
                    printf("%c", number);  
                    ptr+=3; *ptr=temp;  
                }  
                else{  
                    *(ptr+3)=temp; temp=*(ptr+2);  
                    *(ptr+2)='\0'; number=atoi(ptr);  
                    printf("%c", number);  
                    ptr+=2;  
                    *ptr=temp;  
                }  
            }  
            printf("\n");  
        }  
    }  
    return 0;  
 }  
