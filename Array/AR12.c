#include<stdio.h>  
#include<stdlib.h>  
#define OUT 0  
#define IN  1  
struct node{  
        int number;  
        int count;  
};  
int cmp(const void *x, const void *y)  
{  
        return ((struct node *)y)->number-((struct node *)x)->number;  
}  
int main()  
{  
        int i, j, k, count=0, state=OUT;  
        int number[50];  
        struct node lnode[50];  
  
        while(scanf("%d", &number[i])!=EOF){  
                if(number[i]==-999)  
                        break;  
                i++;  
        }  
  
        for(j=0; j<i; j++){  
                for(k=0; k<count; k++){  
                        if(number[j]==lnode[k].number){  
                                lnode[k].count++;  
                                state=IN;  
                                break;  
                        }  
                }  
                if(state!=IN){  
                        lnode[count].number=number[j];  
                        lnode[count].count=1;  
                        count++;  
                }  
                state=OUT;  
        }  
        qsort(lnode, count, sizeof(lnode[0]), cmp);  
        for(i=0; i<count; i++){  
                printf("%d %d\n", lnode[i].number, lnode[i].count);  
        }  
        return 0;  
}  
