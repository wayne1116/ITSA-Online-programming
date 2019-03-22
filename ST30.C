#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#define OUT 0
#define IN  1
int main()
{
		char line[128], *ptr, number[128];
		int count=0, state=OUT;

		while(fgets(line, 128, stdin)!=NULL){
				ptr=line;
				while(*ptr!='\0'){
						if(isdigit(*ptr)){
								number[count]=*ptr;
								count++;
						}
						ptr++;
				}
				number[count]='\0';
				if(count==0)
						printf("-1\n");
				else{
						ptr=number;
						while(*ptr!='\0'){
								if(*ptr!='0'){
										printf("%c", *ptr);
										state=IN;
								}
								else{
										if(state==IN)
												printf("%c", *ptr);
								}
								ptr++;
						}
						if(state==OUT)
								printf("0\n");
						state=OUT;
				
				}
				count=0;
		}
		return 0;
}
