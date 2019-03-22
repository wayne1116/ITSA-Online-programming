#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
int main()
{
		int top=-1;
		char line[10000], *ptr, stack[10000];
		int isp[]={10, 13, 0, 0, 0, 0, 19};
		int icp[]={9, 14, 0, 0, 0, 20, 19};
		while(fgets(line, 10000, stdin)!=NULL){
				ptr=line;
				top=-1;
				while(*ptr!='\0'){
						if(isalpha(*ptr)){
								printf("%c", *ptr);
						}
						else if(*ptr==')'){
								while(stack[top]!='('){
										printf("%c", stack[top]);
										stack[top--]='\0';
								}
								stack[top--]='\0';
						}
						else if(*ptr=='#' || *ptr=='@' || *ptr=='('){
								if(top>=0){
										while(isp[stack[top]%7]>=icp[(*ptr)%7]){
												printf("%c", stack[top]);
												stack[top--]='\0';
												if(top==-1)
														break;
										}
								}
								stack[++top]=*ptr;
						}
						ptr++;
				}
				while(top>=0){
						printf("%c", stack[top]);
						stack[top--]='\0';
				}
				printf("\n");
		}
		return 0;
}								
