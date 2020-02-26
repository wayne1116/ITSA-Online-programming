#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int dp[700][700][700];
int solv(int i, int j, int k)
{
    int first, second, third, forth;
    int min;
    if(i==0 || j==0 || k==0)
        return 1;
    if(dp[i][j][k]>=0)
        return dp[i][j][k];
    
    if(dp[i-1][j-1][k-1]>=0)
        first=dp[i-1][j-1][k-1];
    else{
        first=solv(i-1, j-1, k-1);
        dp[i-1][j-1][k-1]=first;
    }

    if(dp[i>>1][j-1][k>>1]>=0)
        second=dp[i>>1][j-1][k>>1];
    else{
        second=solv(i>>1, j-1, k>>1);
        dp[i>>1][j-1][k>>1]=second;
    }

    if(dp[i>>2][j>>2][k/5]>=0)
        third=dp[i>>2][j>>2][k/5];
    else{
        third=solv(i>>2, j>>2, k/5);
        dp[i>>2][j>>2][k/5]=third;
    }
    
    min=j-1>(third>>1)?(third>>1):j-1;
    if(dp[i>>1][min][k-1]>=0)
        forth=dp[i>>1][min][k-1];
    else{
        forth=solv(i>>1, min, k-1);
        dp[i>>1][min][k-1]=forth;
    }

    dp[i][j][k]=first/3+second+forth;
    return dp[i][j][k];
}
int main()
{
    int i, j, k;
    int result;
    scanf("%d%d%d", &i, &j, &k);
    memset(dp, -1, sizeof(dp));
    result=solv(i, j, k);
    printf("%d\n", result);
    return 0;
}
