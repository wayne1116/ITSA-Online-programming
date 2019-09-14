#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
		char sample[3], target[8], *find, *ptr, *ptr1;
		int count=0;
		while(scanf("%s %s", sample, target)!=EOF){
				ptr=sample;
				ptr1=target;
				find=strstr(ptr1, ptr);
				count=0;
				while(find!=NULL){
						count++;
						ptr1=find+1;
						find=strstr(ptr1, ptr);
				}
				printf("%d\n", count);
		}
		return 0;
}
