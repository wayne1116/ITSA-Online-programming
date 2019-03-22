#include<stdio.h>
#include<stdlib.h>
struct node{
	int number;
	int count;
};
int cmp(const void *x, const void *y)
{
	return ((struct node *)y)->count-((struct node *)x)->count;
}
int main()
{
	int number, i, count=0, count1=0;;
	struct node result[1024];
	while(scanf("%d", &number)!=EOF){
		for(i=0; i<count; i++){
			if(result[i].number==number){
				result[i].count++;
				break;
			}
		}
		if(i==count){
			result[count].number=number;
			result[count++].count=1;
		}
		count1++;
	}
	qsort(result, count, sizeof(struct node), cmp);
	if(result[0].count<count1){
		printf("No Majority\n");
	}
	else{
		printf("Majority is %d\n", result[0].number);
	}
	return 0;
}
