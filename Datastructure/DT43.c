    #include<stdio.h>  
    #include<stdlib.h>  
    #include<ctype.h>  
    int main()  
    {  
        char line[1024], *ptr;  
        while(fgets(line, 1024, stdin)!=NULL){  
            ptr=line;  
            while(*ptr){  
                if(*ptr=='\n' || *ptr=='\r'){  
                    break;  
                }  
                if(isalpha(*ptr)){  
                    if(isupper(*ptr)){  
                        printf("%d", (*ptr-65+13)%26+65);  
                    }  
                    else{  
                        printf("%d", (*ptr-97+13)%26+97);  
                    }  
                }  
                else{  
                    printf("%d", *ptr);  
                }  
                ptr++;  
            }  
            printf("\n");  
        }  
        return 0;  
    }  
