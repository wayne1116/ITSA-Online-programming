#include<stdio.h>
#include<stdlib.h>
#include<math.h>
long pro(long a, long b)
{
		if(b==0)
				return a;
		return pro(b, a%b);
}
int main()
{
		long a, b, i, l, com;
		while(scanf("%ld %ld %ld", &a, &b, &l)!=EOF){
				if(l==1)
						printf("1\n");
				else{
						com=pro(a, b);
						if(l>com)
								printf("%ld\n", com);
						else{
								for(i=com-1; i>=1; i--){
										if(com%i==0)
												break;
								}
								printf("%ld\n", i);
						}
				}
		}
		return 0;
}
