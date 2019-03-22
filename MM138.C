#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a, i, j, result, number[1024];
	while(scanf("%d", &a)!=EOF){
		for(i=0; i<a; i++){
			scanf("%d", &number[i]);
		}
		printf("%d\n", number[0]+number[1]);
		for(i=0, result=0; i<a-2; i++)
			result+=number[i];
		printf("%d\n", result);
		for(j=i; j<a; j++)
			result+=number[j];
		printf("%d\n", result);
	}
	return 0;
}
