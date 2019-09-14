#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int cmp(const void *x, const void *y)
{
		return *(int *)x-*(int *)y;
}
int main()
{
		int a, i, j, k, number[1000], min;
		char line[1000000], *find;
		while(fgets(line, 10000, stdin)!=NULL){
				a=atoi(line);
				for(i=0; i<a; i++){
						fgets(line, 1000000, stdin);
						find=strtok(line, " ");
						k=0;
						while(find!=NULL){
								number[k++]=atoi(find);
								find=strtok(NULL, " ");
						}
						qsort(number, k, sizeof(int), cmp);
						min=number[1]-number[0];
						for(j=2; j<k; j++){
								if(min>number[j]-number[j-1])
										min=number[j]-number[j-1];
						}
						printf("%d\n", min);
				}
		}
		return 0;
}
