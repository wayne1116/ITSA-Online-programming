#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
		int a, i, number, count;
		while(scanf("%d", &a)!=EOF){
				count=0;
				for(i=2; i<=sqrt(a); i++){
						if(a%i==0)
								count++;
				}
				printf("%d\n", count);
		}
		return 0;
}
