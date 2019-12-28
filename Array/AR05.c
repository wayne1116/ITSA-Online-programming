#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int number[16];
short used[16];
int len;
long long temp[362880];
int cmp(const void *x, const void *y)
{
    return *(long long*)x-*(long long*)y;
}
void permutation(long long v, int cur, int n)
{
    int i;
    if(cur==n){
        temp[len++]=v;
        return ;
    }
    for(i=0; i<n; i++){
        if(!used[i]){
            used[i]=1;
            permutation(v*10+number[i], cur+1, n);
            used[i]=0;
        }
    }
}
int main()
{
    int a;
    int i;
    int count;
    int num;
    int divn;
    int result;
    long long same;
    scanf("%d", &a);
    while(a--){
        count=0;
        while(1){
            scanf("%d", &num);
            if(num==-1) break;
            number[count++]=num;
        }
        scanf("%d", &divn);
        memset(used, 0, sizeof(used));
        len=0;
        permutation(0, 0, count);
        qsort(temp, len, sizeof(long long), cmp);
        same=-1;
        result=0;
        for(i=0; i<len; i++){
            if(same!=temp[i]){
                same=temp[i];
                if(same%divn==0) ++result;
            }
        }
        printf("%d\n", result);
    }
    return 0;
}
