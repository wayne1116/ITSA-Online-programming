#include<stdio.h>
#include<stdlib.h>
#define MAX 1024
int gcd(int x, int y)
{
		if(y==0)
				return x;
		return gcd(y, x%y);
}
int main()
{
		int number[5], com, den, num1, num2, num, i;
		char line[MAX], *ptr;
		while(fgets(line, MAX, stdin)!=NULL){
				ptr=line;
				number[0]=atoi(ptr); i=1;
				while(*ptr){
						if(*ptr=='/' || *ptr==' '){
								ptr++;
								number[i++]=atoi(ptr);
						}
						ptr++;
				}
				if(number[1]==0 && number[3]==0)
						break;
				com=gcd(number[1], number[3]);
				den=number[1]*number[3]/com;
				num1=number[0]*number[3]/com;
				num2=number[2]*number[1]/com;
				num=num1+num2;
				com=gcd(num, den);
				printf("%d/%d\n", num/com, den/com);
		}
		return 0;
}
