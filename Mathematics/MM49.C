#include<stdio.h>
#include<stdlib.h>
int state;
int cmp(const void *x, const void *y)
{
    return *(int *)x-*(int *)y;
}
int rec(int amount, int cost, int *a, int start, int end, int count)
{
    int i, result;
    if(start==end){
            if(cost%a[start]==0){
                count+=cost/a[start];
                state=1;
            }
            return count;
    }
    else{
        for(i=0; i<=amount; i++){
            result=i*a[start];
            if(result>cost){
                return count;
            }
            count+=i;
            count=rec(amount-i,cost-result,a,start+1,end, count);
            if(state){
                return count;
            }
            count-=i;
        }
    }
    if(!state)
        count=0;
    return count;

}
int main()
{
    char line[1024], line1[10], *ptr;
    int number[1024], i, amount, cost, result;
    while(fgets(line1, 10, stdin)!=NULL){
        amount=atoi(line1);
        fgets(line, 1024, stdin);
        fgets(line1, 10, stdin);
        cost=atoi(line1);
        ptr=line; number[0]=atoi(ptr); i=1;
        while(*ptr){
            if(*ptr){
                ptr++;
                number[i++]=atoi(ptr);
            }
            ptr++;
        }
        qsort(number, i, sizeof(int), cmp);
        state=0;
        result=rec(amount, cost, number, 0, i-1, 0);
        printf("%d\n", result);
    }
    return 0;
}
