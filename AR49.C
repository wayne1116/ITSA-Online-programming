#include<stdio.h>
#include<stdlib.h>
int main()
{
		int a, result, i, j, b;
		while(scanf("%d", &a)!=EOF){
				result=0;
				for(i=0; i<a; i++)
						for(j=0; j<a; j++){
								scanf("%d", &b);
								if(i==j)
										result+=b;
						}
				printf("%d\n", result);
		}
		return 0;
}
