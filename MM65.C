#include<stdio.h>
#include<stdlib.h>
int main()
{
		int result;
		float a;
		while(scanf("%f", &a)!=EOF){
				result=a*65536;
				printf("%d\n%d\n", result, result+1);
		}
		return 0;
}
