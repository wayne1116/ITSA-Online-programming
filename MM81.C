#include<stdio.h>
#include<stdlib.h>
int main()
{
		int a, i, j, number, count[1024];
		long result;
		while(scanf("%d", &a)!=EOF){
				for(i=0; i<a; i++){
						scanf("%d", &number);
						for(j=0; j<number; j++)
								scanf("%d", &count[j]);
						for(j=1, result=count[0]; j<number; j++)
								result=result*2+count[j];
						printf("%ld\n", result);
				}
		}
		return 0;
}
