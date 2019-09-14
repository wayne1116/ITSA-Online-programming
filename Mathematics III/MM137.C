#include<stdio.h>
#include<stdlib.h>
int main()
{
		int a, i, j, b, result;
		while(scanf("%d", &a)!=EOF){
				for(j=0; j<a; j++){
						scanf("%d", &b);
						for(i=0, result=1; i<b; i++)
								result*=2;
						printf("%d\n", result);
				}
		}
		return 0;
}
