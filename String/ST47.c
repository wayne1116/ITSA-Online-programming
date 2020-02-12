#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#define MAX 100000

int main()
{
	int a, i;
	char line[MAX]={'\0'}, *ptr;
	long int total=0;

	while(scanf("%d", &a)!=EOF){
		for(i=0; i<a; i++){
			scanf("%s", line);
			ptr=line;
			total+=atoi(ptr);
			if(*ptr=='-')
				ptr++;

			while(*ptr!='\0'){
				if(*ptr=='='){
					printf("%ld\n", total);
					total=0;
					break;
				}
				else if(*ptr=='-' || *ptr=='+'){
					total+=atoi(ptr);
				}
				ptr++;
			}
		}
	}
	return 0;
}
