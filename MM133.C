#include<stdio.h>
#include<stdlib.h>
int main()
{
		int a, i;
		double result;
		while(scanf("%d", &a)!=EOF){
				result=0;
				if(a%2==0){
						for(i=2; i<=a; i+=2)
								result+=(1/(double)i);
				}
				else{
						for(i=1; i<=a; i+=2)
								result+=(1/(double)i);
				}
				printf("%.11lf\n", result);
		}
		return 0;
}

