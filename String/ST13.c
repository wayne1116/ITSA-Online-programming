#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#define MAX 128
int cmp(const void *x, const void *y)
{
	return *(char *)x-*(char *)y;
}
int main()
{
	char target[MAX], line[MAX], copy[MAX], number[10];
	char *ptr;
	int i, a;
	while(fgets(target, MAX, stdin)!=NULL){
		ptr=target;
		while(*ptr!='\0'){
			*ptr=tolower(*ptr);
			ptr++;
		}
		qsort(target, strlen(target), sizeof(target[0]), cmp);

		fgets(number, 10, stdin);
		a=atoi(number);
		for(i=0; i<a; i++){
			fgets(line, MAX, stdin);
			strcpy(copy, line);
			ptr=line;
			while(*ptr!='\0'){
				*ptr=tolower(*ptr);
				ptr++;
			}
			qsort(line, strlen(line), sizeof(line[0]), cmp);
			if(strcmp(line, target)==0)
				printf("%s", copy);
		}
	}
	return 0;
}
