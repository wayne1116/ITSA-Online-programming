#include<stdio.h>
#include<stdlib.h>
int main()
{
		int total=0, carry=0;
		int number1, number2;
		unsigned int a, b;

		while(scanf("%u%u", &a, &b)!=EOF){
				if(a==0 && b==0)
						break;
				while(a!=0 || b!=0){
						number1=a%10;
						number2=b%10;
						if(number1+number2+total>=10){
								total=1;
								carry++;
						}
						else
								total=0;
						a=a/10;
						b=b/10;
				}
				if(total!=0){
						if(a!=0){
								while(a!=0){
										if(a%10+total>=10)
												carry++;
										else
												break;
								}
						}
						else if(b!=0){
								while(b!=0){
										if(b%10+total>=10)
												carry++;
										else
												break;
								}
						}
				}
				if(carry>1)
						printf("%d carry operations.\n", carry);
				else if(carry==1)
						printf("1 carry operation.\n");
				else
						printf("No carry operation.\n");
				carry=total=0;
		}
		return 0;
}
