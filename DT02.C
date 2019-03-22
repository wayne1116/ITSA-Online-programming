#include<stdio.h>
#include<stdlib.h>
int main()
{
		long i, a, b, c, m, x0, count, *flag, result;
		while(scanf("%ld", &b)!=EOF){
				for(i=0; i<b; i++){
						scanf("%ld %ld %ld %ld", &a, &c, &m, &x0);
						flag=(long *)calloc(m,sizeof(long));
						count=2; flag[x0]=1;
						while(1){
								result=(a*x0+c)%m;
								if(flag[result])
										break;
								x0=result;
								flag[result]=count;
								count++;
						}
						printf("%ld\n", count-flag[result]);
						free(flag);
				}
		}
		return 0;
}
