#include<stdio.h>
#include<stdlib.h>
int main()
{
		int number, i, j, a, result;
		while(scanf("%d", &a)!=EOF){
				for(i=0; i<a; i++){
						scanf("%d", &number);
						for(j=number, result=1; j>=2; j--)
								result*=j;
						printf("%d\n", result);
				}
		}
		return 0;
}
