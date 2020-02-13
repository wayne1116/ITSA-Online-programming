#include<stdio.h>
#include<stdlib.h>
struct node{
	int No;
	char name[32];
	int grade;
	int rank;
};
int flag;
int cmp(const void *x, const void *y)
{
	if(flag==0)
		return ((struct node *)x)->grade-((struct node *)y)->grade;
	else
		return ((struct node *)x)->No-((struct node *)y)->No;
}
int main()
{
	int i=0, j=0;
	struct node lnode[100];
	while(scanf("%d %s %d", &lnode[i].No, lnode[i].name, &lnode[i].grade)!=EOF){
		i++;
	}
	flag=0;
	qsort(lnode, i, sizeof(lnode[0]), cmp);
	for(j=0; j<i; j++){
		lnode[j].rank=i-j;
	}
	flag=1;
	qsort(lnode, i, sizeof(lnode[0]), cmp);
	for(j=0; j<i; j++)
		printf("%d %s %d %d\n", lnode[j].No, lnode[j].name, lnode[j].grade, lnode[j].rank);
	return 0;
}
