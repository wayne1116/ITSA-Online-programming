#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#define OUT 0
#define IN  1
#define MAX 128

int main()
{
		int i, a, state=OUT;
		char number[10], line[MAX];
		char *ptr, *ptr1, *ptr2;

		while(fgets(number, 10, stdin)!=NULL){
				a=atoi(number);
				for(i=0; i<a; i++){
						fgets(line, MAX, stdin);
						ptr=line;
						while(*ptr!='\0'){
								if(*ptr=='\n')
										break;
								if(isupper(*ptr))
										*ptr=tolower(*ptr);
								ptr++;
						}
						if(*ptr=='.' || *ptr=='!' || *ptr==',')
								ptr--;

						ptr1=ptr-1;
						ptr=line;
						ptr2=line;
						while(ptr1!=ptr2){
								if(*ptr1!=*ptr){
										printf("F\n");
										state=IN;
										break;
								}
								ptr++;
								ptr1--;
						}
						if(state!=IN){
								if(*ptr1==*ptr2)
										printf("T\n");
								else
										printf("F\n");
						}
						state=OUT;
				}
		}
		return 0;
}
						



