#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#define MAX 1024
int main()
{
		char line[MAX], *ptr, *ptr1, *ptr2;

		while(fgets(line, MAX, stdin)!=NULL){
				ptr1=line;
				ptr2=line;
				while(*ptr1!='\0'){
						if(*ptr1==','){
								ptr=ptr1+1;
								ptr1--;
								while(ptr1!=ptr2){
										if(isupper(*ptr1))
												printf("%c", tolower(*ptr1));
										else if(islower(*ptr1))
												printf("%c", toupper(*ptr1));
										else
												printf("%c", *ptr1);
										ptr1--;
								}
								if(isupper(*ptr1))
										printf("%c", tolower(*ptr1));
								else if(islower(*ptr1))
										printf("%c", toupper(*ptr1));
								else
										printf("%c", *ptr1);
								printf(",");
								if(*ptr==' ')
										printf(" ");
								ptr1=ptr;
								ptr2=ptr+1;
						}
						else if(*ptr1==' '||*ptr1=='.'||*ptr1=='!'){
								ptr=ptr1;
								ptr1--;
								while(ptr1!=ptr2){
										if(isupper(*ptr1))
												printf("%c", tolower(*ptr1));
										else if(islower(*ptr1))
												printf("%c", toupper(*ptr1));
										else
												printf("%c", *ptr1);
										ptr1--;
								}
								if(isupper(*ptr1))
										printf("%c", tolower(*ptr1));
								else if(islower(*ptr1))
										printf("%c", toupper(*ptr1));
								else
										printf("%c", *ptr1);
								printf("%c", *ptr);
								ptr1=ptr;
								ptr2=ptr+1;
						}
						ptr1++;
				}
				printf("\n");
		}
		return 0;
}



