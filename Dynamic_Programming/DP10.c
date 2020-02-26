#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i, result[50], a, number;
	result[1]=1; result[2]=1;
	for(i=3; i<=45; i++)
		result[i]=result[i-1]+result[i-2];
	while(scanf("%d", &a)!=EOF){
		for(i=0; i<a; i++){
			scanf("%d", &number);
			printf("%d\n", result[number]);
		}
	}
	return 0;
}
