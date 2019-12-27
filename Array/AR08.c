#include<stdio.h>
#include<stdlib.h>
int max(int a, int b)
{
		return a>b?a:b;
}
int main()
{
		int i=0;
		int n=0;
		int number[128];
		int dp[128];
		int result=0;

		while(scanf("%d", &number[n])!=EOF){
			++n;
		}

		for(i=0; i<n; i++) dp[i]=0;
		dp[0]=max(number[0], 0);

		for(i=1; i<n; i++) dp[i]=max(max(dp[i-1]+number[i], number[i]), 0);
		
		result=0;
		for(i=0; i<n; i++) result=max(result, dp[i]);
		printf("%d\n", result);
		return 0;
}
