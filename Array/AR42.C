#include<stdio.h>
#include<stdlib.h>
int main()
{
		int i=0, j=0;
		int max=0, min=0;
		int a[100];
		while(scanf("%d", &a[i])!=EOF){
				i++;
		}
		max=a[0];
		min=a[0];
		for(j=1; j<i; j++){
				if(max<a[j])
						max=a[j];
				else if(min>a[j])
						min=a[j];
		}
		printf("Largest number = %d\n", max);
		printf("Smallest number = %d\n", min);
		return 0;
}

