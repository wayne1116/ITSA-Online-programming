#include<stdio.h>
#include<stdlib.h>
int gcd(int x, int y)
{
		if(y==0)
				return x;
		return gcd(y, x%y);
}
int main()
{
		int a, b, max, min, number, result, i, j;
		while(scanf("%d", &a)!=EOF){
				for(i=0; i<a; i++){
						scanf("%d", &b);
						max=0; min=2147483647;
						for(j=0; j<b; j++){
								scanf("%d", &number);
								if(max<number)
										max=number;
								if(min>number)
										min=number;
						}
						result=gcd(max, min);
						printf("%d\n", result);
				}
		}
		return 0;
}
