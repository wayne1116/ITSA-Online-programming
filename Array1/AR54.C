#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#define MAX 2048
int main()
{
		char line[MAX], *ptr;
		int i, count=0, flag=0, local[MAX];
		while(fgets(line, MAX, stdin)!=NULL){
				ptr=line;
				if(!isdigit(*ptr)){
						local[count++]=0;
				}
				while(*ptr!='\0'){
						if(*ptr==' '){
								flag++;
								ptr++;
								if(!isdigit(*ptr)){
										local[count++]=flag;
										ptr++;
								}
						}
						ptr++;
				}
				printf("%d\n", count);
				for(i=0; i<count; i++)
						printf("%d\n", local[i]);
				count=0;
				flag=0;
		}
		return 0;
}

