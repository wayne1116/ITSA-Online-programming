#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 100000
struct node{
		char word[1024];
		struct node *next;
};
struct node *insert(struct node *p, char *a)
{
		struct node *new, *current;
		new=(struct node *)malloc(sizeof(struct node));
		strcpy(new->word, a);
		new->next=NULL;
		if(p==NULL)
				return new;
		current=p;
		while(current->next)
				current=current->next;
		current->next=new;
		return p;
}
int main()
{
		int count, num, a, i, j, len;
		char line[MAX], *ptr, *test, line1[10];
		struct node *lnode=NULL, *current, *previous;
		while(fgets(line1, 10, stdin)!=NULL){
				len=atoi(line1);
				for(i=0; i<len; i++){
						fgets(line1, 20, stdin);
						ptr=line1; count=atoi(ptr);
						while(*ptr){
								if(*ptr==' '){
										ptr++;
										num=atoi(ptr);
										break;
								}
								ptr++;
						} 
						fgets(line, MAX, stdin);
						ptr=line;
						while(*ptr){
								if(*ptr=='\n')
										*ptr='\0';
								ptr++;
						}
						test=strtok(line, " ");
						while(test!=NULL){
								lnode=insert(lnode, test);
								test=strtok(NULL, " ");
						}
						current=lnode;
						while(current->next)
								current=current->next;
						current->next=lnode;
						current=previous=lnode;
						while(count>1){
								for(j=0; j<num-1; j++){
										previous=current;
										current=current->next;
								}
								previous->next=current->next;
								previous=current->next;
								free(current);
								current=previous->next;
								count--;
						}
						printf("%s\n", current->word);
						free(current);
						lnode=NULL;
				}
		}
		return 0;
}
