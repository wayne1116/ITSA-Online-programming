#include<stdio.h>
#include<stdlib.h>
int main()
{
		int i, a, number1, number2, result;
		while(scanf("%d", &a)!=EOF){
				if(a==1)
						printf("1\n");
				else if(a==2)
						printf("2\n");
				else{
						number1=1; number2=2;
						for(i=2; i<a; i++){
								result=number1+number2;
								number1=number2;
								number2=result;
						}
						printf("%d\n", result);
				}
		}
		return 0;
}
