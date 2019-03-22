#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
int main()
{
		char line1[10], line[100][100], *ptr, *ptr1;
		int com, number, i, j, len;
		while(fgets(line1, 10, stdin)!=NULL){
				ptr=line1;
				while(*ptr){
						if(*ptr==' '){
								ptr++;
								number=atoi(ptr);
								break;
						}
						ptr++;
				}
				for(i=0; i<number; i++)
						fgets(line[i], 100, stdin);
				com=atoi(line1);
				if(com==1){
						printf("\"Reverse Text\"\n");
						for(i=number-1; i>=0; i--){
								len=strlen(line[i]);
								for(j=len-2; j>=0; j--)
										printf("%c", line[i][j]);
								printf("\n");
						}
				}
				else if(com==2){
						printf("\"Reverse Wording\"\n");
						for(i=number-1; i>=0; i--){
								ptr=ptr1=line[i];
								while(*ptr){
										if(*ptr=='\n'){
												*ptr='\0';
												break;
										}
										ptr++;
								}
								ptr--;
								if(!isalpha(*ptr)){
										printf("%c", *ptr);
										*ptr='\0';
								}
								ptr--;
								while(ptr!=ptr1){
										if(*ptr==' '){
												printf("%s", (ptr+1));
												printf(" ");
												*ptr='\0';
										}
										ptr--;
								}
								printf("%s\n", ptr);
						}

				}
				else{
						printf("\"Wrong Choice\"\n");
						for(i=0; i<number; i++)
								printf("%s", line[i]);
				}
				fgets(line1, 10, stdin);
				if(atoi(line1)==-1)
						break;
		}
		return 0;
}
