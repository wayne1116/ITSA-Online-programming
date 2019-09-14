#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
int main()
{
		char line[1024], *ptr;
		int count, result, number;
		while(scanf("%s", line)!=EOF){
				ptr=line; count=1; result=0;
				while(*ptr){
						if(count>9)
								break;
						if(isdigit(*ptr)){
								result+=((*ptr-48)*count);
								count++;
						}
						ptr++;
				}
				number=atoi(ptr+1);
				if(result%11==number)
						printf("Pass\n");
				else
						printf("Fail\n");
		}
		return 0;
}


