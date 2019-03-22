#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i, j, k, l, number, a[1024], result, state;
	while(scanf("%d", &a[i])!=EOF){
		i++;
	}
	for(j=0; j<i; j++){
		if(j!=0){
			printf("\n");
		}
		number=a[j]; state=0;
		for(k=2; k<=number/2; k++){
			l=k; result=0;
			while(result<number){
				result+=l;
				l++;
				if(result==number){
						state=1;
					printf("%d %d\n", k, l-1);
					break;
				}
			}
		}
		if(state==0)
				printf("0 0\n");
	}
	return 0;
 } 
