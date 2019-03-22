#include<stdio.h>
#include<stdlib.h>
int main()
{
		int a, i, j, temp, count1, count2;
		double n1, n2, m1, m2, result;
		short number1[10][2], number2[10][2]; 
		while(scanf("%d", &a)!=EOF){
				for(i=0; i<a; i++){
						scanf("%lf %lf %lf %lf", &n1, &n2, &m1, &m2);
						for(j=0; j<10; j++)
								number1[j][0]=number2[j][0]=0;
						result=n1/n2;
						while(result<1)
								result*=10;
						for(j=0; j<10; j++){
								temp=result; temp=temp%10;
								if(number1[temp][0]>0)
										break;
								number1[temp][0]++; number1[temp][1]=j; result*=10;
						}
						if(temp==0)
								count1=0;
						else
								count1=j-number1[temp][1];
						result=m1/m2;
						while(result<1)
								result*=10;
						for(j=0; j<10; j++){
								temp=result; temp=temp%10;
								if(number2[temp][0]>0)
										break;
								number2[temp][0]++; number2[temp][1]=j; result*=10;
						}
						if(temp==0)
								count2=0;
						else
								count2=j-number2[temp][1];
						if(count1==count2)
								printf("T\n");
						else if(count1>count2)
								printf("A\n");
						else
								printf("B\n");
				}
		}
		return 0;
}
