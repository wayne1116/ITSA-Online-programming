#include<stdio.h>
#include<stdlib.h>
#define MAX 1024
int main()
{
		char line[MAX], *ptr, *ptr1;
		while(fgets(line, MAX, stdin)!=NULL){
				ptr=line;
				while(*ptr!='\0'){
						if(*ptr=='\n')
								break;
						ptr++;
				}
				ptr--;
				ptr1=line;
				while(ptr!=ptr1 && ptr1<ptr){
						if(*ptr!=*ptr1)
								break;
						ptr1++;
						ptr--;
				}
				if(ptr1==ptr || ptr1>ptr)
						printf("yes\n");
				else
						printf("no\n");
		}
		return 0;
}
