#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a;
	
	while(scanf("%d", &a)!=EOF){
		printf("%d\n", a*(a-1)*(a-2)*(a-3)/24);
	}
	return 0;
}
