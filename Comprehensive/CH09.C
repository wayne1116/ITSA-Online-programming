#include<stdio.h>
#include<stdlib.h>
int main()
{
	    long a, i;
		double number, result, temp;
		while(scanf("%ld", &a)!=EOF){
				result=0;
				for(i=0; i<a-1; i++){
						scanf("%lf", &number);
						result+=number;
				}
				if(a%2==0){
						temp=a/2;
						temp=(a+1)*temp;
				}
				else{
						temp=(a+1)/2;
						temp=temp*a;
				}
				a=temp-result;
				printf("%ld\n", a);
		}
		return 0;
}
