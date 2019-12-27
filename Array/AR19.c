#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	int number1, number, num, count, result;
	while(scanf("%d", &number)!=EOF){
		num=2;count=0;result=1;
		number1=number;
		while(number!=1){
			if(number%num==0){
				number/=num;
				count++;
			}
			else{
				if(count%2)
					result*=num;
				num++;
				count=0;
			}
		}
		if(count%2)
			result*=num;
		printf("%d = %d*%d^2\n", number1, result, (int)sqrt(number1/result));
	}
	return 0;
}
