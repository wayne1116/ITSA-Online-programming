#include<stdio.h>
#include<stdlib.h>
#define MAX 1024
struct node{
		char word;
		struct node *next;
};
struct node1{
		char word;
		int count;
};
int cmp(const void *x, const void *y)
{
		return ((struct node1 *)y)->count-((struct node1 *)x)->count;
}
int main()
{
		char line[MAX], *ptr;
		int count, i, count1=0, max;
		struct node1 result[1024];
		struct node *new, *current, *previous, *next, *lnode=NULL;
		while(fgets(line, MAX, stdin)!=NULL){
				ptr=line;
				if(*ptr=='i'){
						ptr=ptr+7;
						if(*ptr=='l' || *ptr=='r'){
								new=(struct node *)malloc(sizeof(struct node));
								if(*ptr=='l'){
										new->word=*(ptr+5);
										new->next=lnode;
										lnode=new;
								}
								else{
										new->word=*(ptr+6);
										current=lnode;
										while(current->next)
												current=current->next;
										current->next=new;
										new->next=NULL;
								}
						}
						else{
								count=atoi(ptr);
								ptr=ptr+2;
								current=lnode;
								for(i=2; i<count && current!=NULL; i++)
										current=current->next;
								new=(struct node *)malloc(sizeof(struct node));
								new->word=*ptr;
								if(count==1){
										new->next=lnode;
										lnode=new;
								}
								else{
										next=current->next;
										current->next=new;
										new->next=next;
								}
						}

				}
				else{
						ptr=ptr+7;
						if(*ptr=='l' || *ptr=='r'){
								current=previous=lnode;
								if(*ptr=='l'){
										current=current->next;
										free(lnode);
										lnode=current;
								}
								else{
										while(current->next){
												previous=current;
												current=current->next;
										}
										previous->next=NULL;
										free(current);
								}
						}
						else{
								count=atoi(ptr); current=previous=lnode;
								if(count==1){
										current=current->next;
										free(lnode);
										lnode=current;
								}
								else{
										for(i=1; i<count && current!=NULL; i++){
												previous=current;
												current=current->next;
										}
										previous->next=current->next;
										free(current);
								}
						}
				}
		}
		current=lnode;
		while(current){
				for(i=0; i<count1; i++){
						if(current->word==result[i].word){
								result[i].count++;
								break;
						}
				}
				if(i==count1){
						result[i].word=current->word;
						result[i].count=1;
						count1++;
				}
				current=current->next;
		}
		qsort(result, count1, sizeof(struct node1), cmp);
		max=result[0].count;
		for(i=0; i<count1; i++){
				if(max==result[i].count)
						printf("%c ", result[i].word);
				else
						break;
		}
		printf("%d\n", max);
		return 0;
}
