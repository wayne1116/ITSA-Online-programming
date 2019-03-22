#include<stdio.h>
#include<stdlib.h>
int main()
{
		char line[1024], *ptr;
		int count, result;
		while(scanf("%s", line)!=EOF){
				ptr=line; count=128; result=0;
				while(*ptr){
						if(*ptr=='1')
								result+=count;
						ptr++;
						count/=2;
				}
				printf("%c", result);
		}
		printf("\n");
		return 0;
}
