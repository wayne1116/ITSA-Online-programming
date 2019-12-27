#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a, b, i;
	int number, number0, number1;
	while(scanf("%d%d", &a, &b)!=EOF){
		for(i=0; i<a*b; i++){
			scanf("%d", &number);
			if(number==0)
				number0++;
			else
				number1++;
		}
		if(number0>number1)
			printf("0\n");
		else if(number0<number1)
			printf("1\n");
		else
			printf("2\n");
		number0=number1=0;
	}
	return 0;
}
