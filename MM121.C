#include<stdio.h>
#include<stdlib.h>
int main()
{
		int a, i, number1, number2, target;
		float value1, value2, d, a1, result;
		while(scanf("%d", &a)!=EOF){
				for(i=0; i<a; i++){
						scanf("%d", &target);
						scanf("%d %f %d %f", &number1, &value1, &number2, &value2);
						d=(value2-value1)/(number2-number1);
						a1=value1-((number1-1)*d);
						result=target*a1;
						result=result+(((target-1)*target/2)*d);
						printf("%.2f\n", result);
				}
		}
		return 0;
}
