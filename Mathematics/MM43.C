#include<stdio.h>
#include<stdlib.h>
int cmp(const void *x, const void *y)
{
		return *(int *)x-*(int *)y;
}
int pro(int a, int b)
{
		if(b==0)
				return a;
		return pro(b, a%b);
}
int main()
{
		char line[10000], *ptr;
		int i=0, j, com, number[1024];
		while(fgets(line, 10000, stdin)!=NULL){
				ptr=line;
				number[0]=atoi(ptr);
				i=1;
				while(*ptr){
						if(*ptr==' '){
								ptr++;
								number[i++]=atoi(ptr);
						}
						ptr++;
				}
				qsort(number, i, sizeof(int), cmp);
				com=pro(number[0], number[1]);
				for(j=2; j<i; j++)
						com=pro(number[j], com);
				printf("Common factor in ascending order: ");
				for(j=2; j<com; j++){
						if(com%j==0)
								printf("%d ", j);
				}
				printf("%d\n", com);
		}
		return 0;
}
