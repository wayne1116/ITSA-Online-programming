#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a, i, j, b, c, result, temp;
	while(scanf("%d", &a)!=EOF){
		for(i=0; i<a; i++){
			scanf("%d%d", &b, &c);
			result=0;
			for(j=b; j<=c; j++){
				temp=j;
				while(temp>0){
					if(temp%10==1){
						result++;
					}
					temp/=10;
				}
			}
			printf("%d\n", result);
		}
	}
	return 0;
}
