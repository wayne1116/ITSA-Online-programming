#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 128
struct node{
		char word;
		int count;
};

int main()
{
		int total=0, i, max, flag, count=0;
		char line[MAX];
		char *ptr;
		struct node *lnode;

		while(scanf("%s", line)!=EOF){
				ptr=line;
				lnode=(struct node *)malloc(strlen(line)*sizeof(struct node));
				count=0;
				while(*ptr!='\0'){
						for(i=0; i<count; i++){
								if(lnode[i].word==*ptr){
										lnode[i].count++;
										break;
								}
						}
						if(i==count){
								lnode[count].count=1;
								lnode[count].word=*ptr;
								count++;
						}
						ptr++;
				}

				for(i=0; i<count; i++)
						printf("%c\t%d\n", lnode[i].word, lnode[i].count);

				max=0;
				total=0;
				for(i=0; i<count; i++){
						if(max<lnode[i].count){
								max=lnode[i].count;
								flag=i;
								total=1;
						}
						else if(max==lnode[i].count){
								total++;
						}
				}

				if(total!=1)
						printf("None\n");
				else
						printf("%c\n", lnode[flag].word);
				free(lnode);
		}
		return 0;
}


