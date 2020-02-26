#include<iostream>
#include<cstdlib>
#include<algorithm>
using namespace std;
int main()
{
	char line[10000], *ptr;
	int number[1024], n=0;
	int dp[2][1024];
	
	while(fgets(line,10000,stdin)!=NULL){
		ptr=line;
		number[0]=atoi(ptr);
		n=1;
		while(*ptr){
			if(*ptr==' '){
				ptr++;
				if(atoi(ptr)!=0)
					number[n++]=atoi(ptr);
			}
			ptr++;
		}
		int Max=1;
		for(int i=0; i<n; i++){
			dp[0][i]=dp[1][i]=1;
			for(int j=0; j<i; j++){
				if(number[i]-number[j]>0)
					dp[0][i]=max(dp[1][j]+1,dp[0][i]);
				else if(number[i]-number[j]<0)
					dp[1][i]=max(dp[0][j]+1,dp[1][i]);
			}
			Max=max(Max, max(dp[0][i],dp[1][i]));
		}
		cout << Max << endl;
	}
	return 0;
}
