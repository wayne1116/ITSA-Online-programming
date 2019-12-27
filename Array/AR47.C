#include<stdio.h>
#include<stdlib.h>
#define OUT 0
#define IN  1
int main()
{
	int a, state=OUT;
	while(scanf("%d", &a)!=EOF){
		while(a!=0){
			if(a==1)
				break;
			if(a%2==0)
				a/=2;
			else if(a%3==0)
				a/=3;
			else if(a%5==0)
				a/=5;
			else{
				state=IN;
				break;
			}
		}
		if(state!=IN)
			printf("Regular number!\n");
		else
			printf("Irregular number!\n");
		state=OUT;
	}
	return 0;
}
