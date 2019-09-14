#include<stdio.h>
#include<stdlib.h>
int main()
{
		int a, i, j;
		int *number;
		int current=0, compla=0;

		while(scanf("%d", &a)!=EOF){
				number=(int *)malloc(a*sizeof(int));
				for(i=0; i<a; i++){
						scanf("%d", &number[i]);
				}
				for(i=0; i<a; i++){
						current=number[i];
						for(j=0; j<i; j++){
								if(number[j]>current)
										compla++;
						}
				}
				printf("Complaint =%d\n", compla);
				compla=0;
				free(number);
		}
		return 0;
}
