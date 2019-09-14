#include<stdio.h>
#include<stdlib.h>
struct node{
		int person;
		int number;
};
int cmp(const void *x, const void *y)
{
		return ((struct node *)y)->number-((struct node *)x)->number;
}
int main()
{
		int i, j, a, number, vote;
		struct node *voter;
		while(scanf("%d", &a)!=EOF){
				for(i=0; i<a; i++){
						scanf("%d", &number);
						voter=(struct node *)malloc(1024*sizeof(struct node));
						for(j=0; j<number; j++){
								voter[j].person=j;
								voter[j].number=0;
						}
						for(j=0; j<number; j++){
								scanf("%d", &vote);
								voter[vote-1].number++;
						}
						qsort(voter, number, sizeof(struct node), cmp);
						if(voter[0].number>=number/2+1 && voter[0].number!=voter[1].number)
								printf("%d\n", voter[0].person+1);
						else
								printf("0\n");
				}
				free(voter);
		}
		return 0;
}

