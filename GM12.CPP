#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	int n=0;
	float result=0;
	while(scanf("%d", &n) && n){
		result=n*4*sqrt(2);
		n=result;
		printf("%d\n", n);
	}
	return 0;
}
