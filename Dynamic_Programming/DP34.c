#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int result;
int dp[64];

int solv(int number)
{
    int i, sum=0;

    if(number<=0) {
        return 1;
    }

    if(dp[number]>=0){
        return dp[number];
    }

    for(i=2; i<=number; i++) {
        sum+=solv(number-i);
    }
    dp[number]=sum;
    return sum;
}

int main()
{
    int number=0;
    int result=0;
    scanf("%d", &number);
    if(number==0 || number==1)
        printf("0\n");
    else{
        result=0;
        memset(dp, -1, sizeof(dp));
        dp[0]=dp[1]=0;
        dp[2]=1;
        result=solv(number);
        printf("%d\n", result);
    }
    return 0;
}
