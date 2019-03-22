#include<stdio.h>
#include<stdlib.h>
int main()
{
		int n, m, i;
		int result1, result2, result;
		while(scanf("%d %d", &n, &m)!=EOF){
				result1=1; result2=0;
				for(i=2; i<=n; i++){
						result=(result1+result2)%m;
						result2=result1;
						result1=result;
				}
				printf("%d\n", result);
		}
		return 0;
}
