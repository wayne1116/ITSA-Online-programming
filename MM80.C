#include<stdio.h>
#include<stdlib.h>
#define SWAP(x, y, z) ((z)=(x), (x)=(y), (y)=(z))
int main()
{
		char exp1[10], exp2[10], *ptr1, *ptr2, *temp1;
		int number1, number2, temp;
		double float1, float2, temp2, temp3;
		scanf("%lf %s %lf %s", &float1, exp1, &float2, exp2);
		ptr1=exp1; ptr2=exp2;
		number1=atoi(ptr1+1); number2=atoi(ptr2+1);
		if(number1<number2){
				SWAP(number1, number2, temp);
				SWAP(ptr1, ptr2, temp1);
		}
		else if(number1==number2){
				if(float1<float2)
						SWAP(float1, float2, temp2);
		}
		temp=number2; temp3=float2;
		while(number1>temp){
				temp3/=10.0;
				temp++;
		}
		printf("sum:%.6lfe%d\n", (temp3+float1>1?(temp3+float1)/10.0:temp3+float1), (temp3+float1>1?number1+1:number1));
		printf("difference:%.6lfe%d\n", float1-temp3, float1-temp3==0?0:number1);
		temp3=float1*float2; temp=number1+number2;
		while(temp3*10<=1){
				temp3*=10;
				temp--;
		}
		printf("product:%.6lfe%d\n", temp3, temp);
		temp3=float1/float2; temp=number1-number2;
		while(temp3>=1){
				temp3/=10.0;
				temp++;
		}
		printf("quotinet:%.6lfe%d\n", temp3, temp);
		return 0;
}
