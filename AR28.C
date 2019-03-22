#include<stdio.h>
#include<stdlib.h>
#define MAX 5000
int main()
{
		int a, i, j;
		int number[MAX];
		int count=0;
		while(scanf("%d", &a)!=EOF){
				for(i=0; i<a; i++){
						scanf("%d", &number[i]);
				}
				for(i=a-1; i>0; i--){
						for(j=i-1; j>=0; j--){
								if(number[j]>number[i]*2)
										count++;
						}
				}
				printf("%d\n", count);
				count=0;
		}
		return 0;
}
