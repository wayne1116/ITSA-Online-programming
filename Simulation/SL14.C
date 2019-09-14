#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#define OUT 0
#define IN  1
#define MAX 1024
int main()
{
		char begin[MAX], value[MAX], oper[MAX], temp[MAX], *ptr;
		int state=OUT, sum, x, integer;
		while(scanf("%s", begin)!=EOF){
				scanf("%s", value);
				ptr=value;
				while(*ptr){
						if(isdigit(*ptr)){
								x=atoi(ptr);
								break;
						}
						ptr++;
				}
				scanf("%s", value); scanf("%s", value);
				scanf("%s", value); scanf("%s", oper);
				scanf("%s", temp); scanf("%s", temp);
				ptr=oper; state=OUT;
				while(*ptr){
						if((*ptr=='-' && x<0) || (*ptr=='+' && x>0)){
								printf("<undefined>\n");
								state=IN;
								break;
						}
						ptr++;
				}
				if(state==OUT){
						ptr=value;
						while(*ptr){
								if(*ptr=='+' || *ptr=='-'){
										if(*(ptr-1)=='M'){
												if(isdigit(*(ptr+1))){
														integer=atoi(ptr+1);
														sum=0;
														while(x!=0){
																sum+=integer;
																x=(x>0?x-1:x+1);
														}
														break;
												}
												else{
														sum=0;
														while(x!=0){
																sum+=x;
																x=(x>0?x-1:x+1);
														}
														break;
												}
										}
										else{
												integer=atoi(ptr+1);
												sum=0;
												while(x!=0){
														sum=x+integer;
														x=(x>0?x-1:x+1);
												}
												break;
										}
								}
								ptr++;
						}
						printf("SUM=%d\n", sum);
				}
		}
		return 0;
}

