#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	int hei;
	float wei, result;
	while(scanf("%d %f", &hei, &wei)!=EOF){
		wei=wei*sqrt(wei);
		result=hei/wei-18;
		if(result>=40)
			printf("morbidly obese\n");
		else if(result>=30)
			printf("obese\n");
		else if(result>=25)
			printf("overweight\n");
		else if(result>=18.5)
			printf("healthy\n");
		else
			printf("underweight\n");
	}
	return 0;
}
