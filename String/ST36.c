#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 10002

int main()
{
	char line[MAX], *find, *ptr;
	int i;

	while(fgets(line, MAX, stdin)!=NULL){
		if((find=strstr(line, "Tel"))!=NULL){
			find+=4;
			ptr=find+2;
			if(*ptr=='-')
				for(i=0; i<10; i++){
					printf("%c", *find);
					find++;
				}
				else
					for(i=0; i<13; i++){
						printf("%c", *find);
						find++;
					}
			printf("\n");
		}
		else
			printf("N/A\n");
	}
	return 0;
}						
