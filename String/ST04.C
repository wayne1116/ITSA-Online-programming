#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
		char line[10000], result[10000], *ptr, temp;
		int temp1, temp2, i, j, len;
		while(fgets(line, 10000, stdin)!=NULL){
				for(i=0; i<10000; i++)
						result[i]='\0';
				ptr=line; len=0;
				while(*ptr){
						if(*ptr=='\n'){
								*ptr='\0';
								break;
						}
						ptr++; len++;
				}
				for(i=0; i<len-1; i++){
						for(j=len-1; j>i; j--){
								temp1=i; temp2=j;
								while(line[temp1]==line[temp2]){
										temp1++; temp2--;
								}
								if(temp1>=temp2){
										ptr=&line[i]; temp=line[j+1]; line[j+1]='\0';
										if(strlen(result)<strlen(ptr))
												strcpy(result, ptr);
										line[j+1]=temp;
								}
						}
				}
				if(result[0]!='\0')
						printf("%s\n", result);
				else
						printf("There's no palindrome in this string!\n");
		}
		return 0;
}
