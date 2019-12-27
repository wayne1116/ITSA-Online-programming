#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a, b, i, j, k, l, max, sum, number[1024];
	while(scanf("%d", &a)!=EOF){
		for(i=0; i<a; i++){
			scanf("%d", &b);
			for(j=0; j<b; j++)
				scanf("%d", &number[j]);
			max=0;
			for(j=b-1; j>=0; j--){
				for(l=0; l<b; l++){
					sum=0;
					for(k=j; k<b-l; k++)
						sum+=number[k];
					if(sum>max)
						max=sum;
				}
			}
			printf("%d\n", max);
		}
	}
	return 0;
}
