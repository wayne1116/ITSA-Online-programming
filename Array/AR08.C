#include<stdio.h>
#include<stdlib.h>
int main()
{
		int i=0, j=0, k=0, l=0;
		int total=0, sum=0, count=0, max;
		int number[100], result[100];

		while(scanf("%d", &number[i])!=EOF){
				i++;
		}

		for(j=0; j<i-2; j++){
				count=j;
				total=i-j;
				while(total!=1){
						for(k=j; k<total; k++){
								sum+=number[k];
						}
						result[count]=sum;
						sum=0;
						count++;
						total--;
				}
				max=result[0];
				for(l=1; l<count; l++){
						if(max<result[l])
								max=result[l];
				}
				result[0]=max;
		}
		if(max>0)
				printf("%d\n", result[0]);
		else
				printf("0\n");
		return 0;
}

