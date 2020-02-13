#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node{
	char number[1024];
	char grade[1024];
};
int cmp(const void *x, const void *y)
{
	return strcmp(((struct node *)x)->grade, ((struct node *)y)->grade);
}
int main()
{
	int i=0, j=0;
	struct node lnode[100];
	
	while(scanf("%s%s", lnode[i].number, lnode[i].grade)!=EOF){
		i++;
	}
	qsort(lnode, i, sizeof(lnode[0]), cmp);
	for(j=0; j<3; j++)
		printf("%s %s\n", lnode[j].number, lnode[j].grade);
	return 0;
}
