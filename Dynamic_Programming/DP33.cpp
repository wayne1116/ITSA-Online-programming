#include<stdio.h>  
#include<stdlib.h>  
struct node{  
    int start;  
    int end;  
};  
int cmp(const void *x, const void *y)  
{  
    if(((struct node *)x)->end==((struct node *)y)->end)  
        return ((struct node *)x)->start-((struct node *)y)->start;  
    return ((struct node *)x)->end-((struct node *)y)->end;   
}   
struct node lnode[50000];  
int main()  
{  
    int a=0, b=0;  
    int i=0, j=0;  
    int count=0;  
    int time=0;  
    while(scanf("%d", &a)!=EOF){  
        for(i=0; i<a; i++){  
            scanf("%d", &b);  
            for(j=0; j<b; j++){  
                scanf("%d", &lnode[j].start);  
            }  
            for(j=0; j<b; j++){  
                scanf("%d", &lnode[j].end);  
            }  
            qsort(lnode,b,sizeof(struct node),cmp);  
            time=lnode[0].end;  
            count=1;  
            for(j=1; j<b; j++){  
                if(time<=lnode[j].start){  
                    time=lnode[j].end;  
                    count++;  
                }  
            }  
            printf("%d\n", count);  
        }  
    }     
    return 0;  
}  
