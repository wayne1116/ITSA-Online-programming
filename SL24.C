#include<stdio.h>
#include<stdlib.h>
int main()
{
		int a, i, number, mod0, mod1, mod2;
		while(scanf("%d", &a)!=EOF){
				mod0=mod1=mod2=0;
				for(i=0; i<a; i++){
						scanf("%d", &number);
						if(number%3==0)
								mod0++;
						else if(number%3==1)
								mod1++;
						else
								mod2++;
				}
				printf("%d %d %d\n", mod0, mod1, mod2);
		}
		return 0;
}
