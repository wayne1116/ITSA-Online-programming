#include<stdio.h>
#include<stdlib.h>
int main()
{
		int a, i;
		int count=0, count1=0;
		int number1, number2, number;

		while(scanf("%d", &a)!=EOF){
				for(i=0; i<a; i++){
						scanf("%d", &number);
						number2=number1=number;
						while(number1!=0){
								if(number1%2!=0)
										count++;
								number1/=2;
						}
						while(number2!=0){
								switch (number2%10)
								{
										case 0:
												count1+=0;
												break;
										case 1:
												count1+=1;
												break;
										case 2:
												count1+=1;
												break;
										case 3:
												count1+=2;
												break;
										case 4:
												count1+=1;
												break;
										case 5:
												count1+=2;
												break;
										case 6:
												count1+=2;
												break;
										case 7:
												count1+=3;
												break;
										case 8:
												count1+=1;
												break;
										case 9:
												count1+=2;
												break;
								}
								number2/=10;
						}
						printf("%d %d\n", count, count1);
						count=count1=0;
				}
		}
		return 0;
}

