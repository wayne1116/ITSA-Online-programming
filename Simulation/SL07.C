#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
int main()
{
		int total=0;
		 char line[128], *ptr;
		while(scanf("%s", line)!=EOF){
				if(strcmp(line, "end")==0)
						break;
				ptr=line;
				total=0;
				while(*ptr!='\0'){
						if(isupper(*ptr)){
								total++;
						}
						if(tolower(*ptr)=='a' || tolower(*ptr)=='e' || tolower(*ptr)=='i' || tolower(*ptr)=='o' || tolower(*ptr)=='u')
								total+=5;
						else
								total+=2;
						ptr++;
				}
				printf("%d\n", total);
		}
		return 0;
}
