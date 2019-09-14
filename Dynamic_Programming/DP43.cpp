#include<stdio.h>  
#include<stdlib.h>  
int cmp(const void *x, const void *y)  
{  
        return *(int *)x-*(int *)y;  
}  
int main()  
{  
        int i=0;  
        int j=0;  
        int a=0;  
        int number[1000];  
        int number1[1000];  
        int **length;  
        char line[10000];  
        char *ptr;  
        while(fgets(line,10000,stdin)!=NULL){  
                ptr=line;  
                number[0]=number1[0]=atoi(ptr); a=1;  
                while(*ptr){  
                    if(*ptr==' '){  
                        ptr++;  
                        number[a]=number1[a]=atoi(ptr);  
                        a++;  
                    }  
                    ptr++;  
                }  
                qsort(number1, a, sizeof(int), cmp);  
   
                for(i=0; i<=a; i++) length=(int **)malloc((a+1)*sizeof(int *));  
                for(j=0; j<=a; j++) length[j]=(int *)malloc((a+1)*sizeof(int));  
                    
                for(i=0; i<=a; i++) length[i][0]=0;  
                for(j=0; j<=a; j++) length[0][j]=0;  
                for(i=1; i<=a; i++){  
                        for(j=1; j<=a; j++){  
                                if(number[i-1]==number1[j-1])  
                                          length[i][j]=length[i-1][j-1]+1;  
                                else if(length[i-1][j]<length[i][j-1])  
                                          length[i][j]=length[i][j-1];  
                                else  
                                          length[i][j]=length[i-1][j];  
                        }  
                }  
                printf("%d\n", length[a][a]);  
                for(i=0; i<=a; i++){  
                    free(length[i]);  
                }  
                free(length);  
        }  
        return 0;  
}  
