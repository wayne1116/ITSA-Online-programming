#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a, i, j, number, temp;
	while(scanf("%d", &a)!=EOF){
		for(i=0; i<a; i++){
			scanf("%d", &number);
			temp=0;
			for(j=0; j<2; j++){
				temp+=(number%10);
				number/=10;
			}
			printf("%d\n", number-temp);
		}
	}
	return 0;
}
