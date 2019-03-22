#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

int main()
{
		int i=0;
		int count[26]={0};
		char line[128]={'\0'}, *ptr;

		while(scanf("%s", line)!=EOF){
				ptr=line;
				while(*ptr!='\0'){
						if(isalpha(*ptr)){
								if(isupper(*ptr)){
										count[*ptr-65]++;
								}
								else{
										count[*ptr-97]++;
								}
						}
						ptr++;
				}

				for(i=0; i<26; i++){
						printf("%d\n", count[i]);
						count[i]=0;
				}
		}
		return 0;
}
