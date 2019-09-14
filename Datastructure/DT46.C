#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
int main()
{
		int top, isp[]={0,19,13,12,0,12,0,13}, icp[]={20,19,13,12,0,12,0,13};
		char line[1024], *ptr, stack[1024];
		while(scanf("%s", line)!=EOF){
				ptr=line; top=-1;
				while(*ptr){
						if(*ptr=='#')
								break;
						if(isalpha(*ptr))
								printf("%c", *ptr);
						else if(*ptr==')'){
								while(stack[top]!='('){
										printf("%c", stack[top]);
									    stack[top]='\0'; top--;
								}
								stack[top]='\0'; top--;
						}
						else{
								while(isp[stack[top]-40]>=icp[*ptr-40])
										printf("%c", stack[top--]);
								stack[++top]=*ptr;
						}
						ptr++;
				}
				while(top>=0){
						printf("%c", stack[top]);
						top--;
				}
				printf("\n");
		}
		return 0;
}
