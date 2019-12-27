#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#define MAX 1024
int main()
{
	char line[MAX], *ptr;
	while(fgets(line, MAX, stdin)!=NULL){
		ptr=line;
		while(*ptr!='\0'){
			if(*ptr=='\n')
				break;
			if(isalpha(*ptr)){
				if(toupper(*ptr)>='A' && toupper(*ptr)<='M'){
					printf("%c", *ptr+13);
				}
				else
					printf("%c", *ptr-13);
			}
			else
					printf("%c", *ptr);
			ptr++;
		}
		printf("\n");
	}
	return 0;
}
