#include<stdio.h>
#include<stdlib.h>
int main()
{
		int count, pro;
		char line[1024], *ptr;
		while(scanf("%s", line)!=EOF){
				ptr=line;
				count=0;
				while(*ptr){
						pro=*ptr;
						while(pro>0){
								if(pro%2==1)
										count++;
								pro/=2;
						}
						ptr++;
				}
				printf("%d\n", count);
		}
		return 0;
}
