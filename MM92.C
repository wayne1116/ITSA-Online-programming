#include<stdio.h>
#include<stdlib.h>
int main()
{
		short *number;
		char line[1024], *ptr;
		int result, i, j;
		while(scanf("%s", line)!=EOF){
				if(line[0]=='#')
						break;
				ptr=line; result=0;
				number=(short *)calloc(1024, sizeof(short));
				while(*ptr){
						result+=*ptr-48;
						ptr++;
				}
				i=0;
				while(result>0){
						number[i++]=result%3;
						result/=3;
				}
				for(j=i-1; j>0; j--)
						printf("%d", number[j]);
				printf("%d\n", number[0]);
		}
		return 0;
}
