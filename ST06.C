#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
struct node{
		char name[1024];
		int count;
};
int cmp(const void *x, const void *y)
{
		char *ptr1, *ptr2;
		if(((struct node *)x)->count==((struct node *)y)->count){
				ptr1=((struct node *)x)->name; ptr2=((struct node *)y)->name;
				return strcmp(ptr1, ptr2);
		}
		return ((struct node *)y)->count-((struct node *)x)->count;
}
int main()
{
		char line[10000], *ptr, *ptr1, result[10000];
		int count=0, i;
		struct node lnode[1024];
		while(fgets(line, 10000, stdin)!=NULL){
				ptr=line;
				while(*ptr){
						if(*ptr=='<' && toupper(*(ptr+1))=='A'){
								while(*ptr){
										if(*ptr=='"'){
												ptr++;
												break;
										}
										ptr++;
								}
								ptr1=ptr;
								while(*ptr){
										if(*ptr=='"'){
												*ptr='\0';
												break;
										}
										ptr++;
								}
								strcpy(result, ptr1);
								*ptr='"';
								ptr++;
								while(*ptr){
										if(!isspace(*ptr)){
												ptr++;
												break;
										}
										ptr++;
								}
								ptr1=ptr;
								while(*ptr){
										if(*ptr=='<')
												break;
										if(*ptr=='>'){
												*(ptr-1)='\0';
												strcpy(result, ptr1);
												break;
										}
										ptr++;
								}
								for(i=0; i<count; i++){
										if(strcmp(lnode[i].name, result)==0){
												lnode[i].count++;
												break;
										}
								}
								if(i==count){
										strcpy(lnode[count].name, result);
										lnode[count].count=1;
										count++;
								}
								break;
						}
						ptr++;
				}
		}
		qsort(lnode, count, sizeof(struct node), cmp);
		for(i=0; i<count; i++){
				printf("%d %s\n", lnode[i].count, lnode[i].name);
		}
		return 0;
}
