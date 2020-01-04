#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a, i, number[1024], count, j, b, k;
	while(scanf("%d", &a)!=EOF){
		for(k=0; k<a; k++){
			scanf("%d", &b);
			for(i=0; i<b; i++){
				scanf("%d", &number[i]);
			}
			count=0;
			for(i=0; i<b-1; i++){
				for(j=i+1; j<b; j++){
					if(number[i]>number[j])
						count++;
				}
			}
			printf("%d\n", count);
		}
	}
	return 0;
}
