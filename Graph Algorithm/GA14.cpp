#include<stdio.h>      
#include<stdlib.h>      
struct node{      
    int start;      
    int end;      
};      
int cmp(const void *x, const void *y)      
{      
   if(((struct node *)x)->start==((struct node *)y)->start)    
         return ((struct node *)y)->end-((struct node *)x)->end;    
    return ((struct node *)x)->start-((struct node *)y)->start;       
}      
int main()      
{      
    int a=0, b=0;      
    int i=0, j=0;      
    int end=0, max=0, result=0, temps=0, tempe=0, count=0;      
    struct node lnode[128];       
    while(scanf("%d", &a)!=EOF){      
        for(i=0; i<a; i++){      
            scanf("%d", &b);      
            for(j=0; j<b; j++)      
                scanf("%d%d", &lnode[j].start, &lnode[j].end);      
            qsort(lnode,b,sizeof(struct node),cmp);      
                  
            if(lnode[0].start!=0)      
                printf("0\n");      
            else{      
                end=lnode[0].end;      
                max=end;      
                result=1;      
                count=-50;    
                for(j=1; j<b && count<b; j++, count++){      
                    temps=lnode[j].start;      
                    tempe=lnode[j].end;      
                    if(temps<=end+1){      
                        if(max<tempe)      
                            max=tempe;      
                    }      
                    else{      
                        end=max;      
                        result++;      
                        j--;      
                    }      
                    if(max==199){      
                        end=199;      
                        result++;      
                        break;      
                    }      
                }      
                if(end==199)      
                    printf("%d\n", result);      
                else      
                    printf("0\n");      
            }                 
        }         
    }      
    return 0;    
}  
