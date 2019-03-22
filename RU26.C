#include<stdio.h>
#include<stdlib.h>
int main()
{
		int i, a, result;
		while(scanf("%d", &a)!=EOF){
				for(i=0, result=1; i<a; i++)
						result*=2;
				printf("%d\n", (result-1)*3);
		}
		return 0;
}
						
