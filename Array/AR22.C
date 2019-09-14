#include<stdio.h>
#include<stdlib.h>
int main()
{
		char line[1024], *ptr;
		while(scanf("%s", line)!=EOF){
				ptr=line;
				while(*ptr!='\0'){
						printf("%c", *ptr-3);
						ptr++;
				}
		}
		return 0;
}

