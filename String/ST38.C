#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
int main()
{
		char line[1024], *ptr, result[1024];
		int number, i, j, lcount, rcount, oper;
		scanf("%s", line);
		ptr=line; i=0;
		while(*ptr){
				if(isdigit(*ptr)){
						result[i++]=*ptr;
						while(isdigit(*ptr))
								ptr++;
				}
				else{
						result[i++]=*ptr;
						ptr++;
				}
		}
		lcount=rcount=number=oper=0;
		for(j=0; j<i; j++){
				if(result[j]=='(')
						lcount++;
				else if(result[j]==')')
						rcount++;
				else if(result[j]=='+' || result[j]=='-' || result[j]=='*' || result[j]=='/')
						oper++;
				else
						number++;
				if(lcount<rcount)
						break;
				if(j>0){
						if(result[j-1]=='(' && result[j]==')')
								break;
						else if(result[j-1]==')' && (result[j]=='(' || isdigit(result[j])))
								break;
						else if((result[j-1]=='+' || result[j-1]=='-' || result[j-1]=='*' || result[j-1]=='/') && (result[j]==')' ||
												result[j]=='+' || result[j]=='-' || result[j]=='*' || result[j]=='/'))
								break;
						else if(isdigit(result[j-1]) && (result[j]=='(' || isdigit(result[j])))
								break;
				}
		}
		if(lcount!=rcount || oper+1!=number || j<i)
				printf("illegal equation\n");
		else
				printf("legal equation\n");
		return 0;
}
