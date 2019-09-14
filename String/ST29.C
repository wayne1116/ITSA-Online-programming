#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#define MAX 100000
int main()
{
		int number, i, len;
		char line[MAX], word[MAX];
		char *ptr, *ptr1;
		while(fgets(line, MAX, stdin)!=NULL){
				len=strlen(line);
				line[len-1]='\0';
				ptr=line;
				while(*ptr!='\0'){
						if(isdigit(*ptr)){
								number=atoi(ptr);
								while(*ptr!='\0'){
										if(!isdigit(*ptr))
												break;
										ptr++;
								}
								ptr1=ptr;
								while(*ptr!='\0'){
										if(isdigit(*ptr))
												break;
										ptr++;
								}
								strncpy(word, ptr1, ptr-ptr1);
								word[ptr-ptr1]='\0';
								for(i=0; i<number; i++)
										printf("%s", word);
						}
				}
				printf("\n");
		}
		return 0;
}


