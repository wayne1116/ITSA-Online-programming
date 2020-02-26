#include<stdio.h>  
#include<stdlib.h>  
int state=0;  
int rec(int *a, int start, int end, int target, int count)  
{  
        int i;  
        if(start==end){  
            if(target%a[end]==0){  
                count+=target/a[end];  
                state=1;  
            }  
            return count;  
        }  
        else{  
            for(i=0; ; i++){  
                if(target<a[start]*i)  
                    return count;  
                count+=i;  
                count=rec(a,start+1,end,target-a[start]*i,count);  
                if(state){  
                    return count;  
                }  
                count-=i;  
            }  
        }  
        return count;  
}  
int cmp(const void *x, const void *y)  
{  
        return *(int *)x-*(int *)y;  
}  
int main()  
{  
        char line[1024];  
        char *ptr;  
        int count=0;  
        int money[10];  
        int target=0;  
        int result=0;  
        fgets(line,1024,stdin);  
        ptr=line;  
        money[0]=atoi(ptr);  
        count=1;
    
        while(*ptr){  
            if(*ptr==' '){  
                ptr++;  
                money[count++]=atoi(ptr);  
            }  
            ptr++;  
        }
    
        qsort(money,count,sizeof(int),cmp);  
        while(scanf("%d", &target)!=EOF){  
            state=0;  
            result=rec(money,0,count-1,target,0);  
            printf("%d\n", result);  
        }  
        return 0;  
}  
