#include<stdio.h>
#include<stdlib.h>
int main()
{
		long a, i, number;
		scanf("%ld", &a);
		for(i=0; i<a; i++){
				scanf("%ld", &number);
				if(number==i)
						printf("x[%ld] = %ld\n", i, i);
		}
		return 0;
}
