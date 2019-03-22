#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
		int a, result, i;
		while(scanf("%d", &a)!=EOF){
				for(i=0, result=1; i<a; i++)
						result*=2;
				printf("%d\n", result-1);
		}
		return 0;
}
