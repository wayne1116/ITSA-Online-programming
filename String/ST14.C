#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
		int a, i, len;
		char line[1000][101], *ptr, result[100001]={'\0'};
		scanf("%d", &a);
		for(i=0; i<a; i++)
				scanf("%s", line[i]);
		strcpy(result, line[0]);
		for(i=1; i<a; i++){
				ptr=result; len=strlen(ptr);
				while(*ptr){
						if(!strncmp(line[i], ptr, len)){
								*ptr='\0'; break;
						}
						ptr++; len--;
				}
				strcat(result, line[i]);
		}
		printf("%s\n", result);
		return 0;
}



