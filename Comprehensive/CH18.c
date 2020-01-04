#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node{
	char word[1024];
	int price;
};
int cmp(const void *x, const void *y)
{
	if(strcmp(((struct node *)x)->word, ((struct node *)y)->word)==0)
		return ((struct node *)x)->price-((struct node *)y)->price;
	return strcmp(((struct node *)x)->word, ((struct node *)y)->word);
}
int main()
{
	int a, i, j, result, price[1024], count;
	char temp[1024];
	struct node lnode[100];
	while(scanf("%d", &a)!=EOF){
		for(i=0; i<a; i++){
			scanf("%s%d", lnode[i].word, &lnode[i].price);
		}
		qsort(lnode, a, sizeof(struct node), cmp);
		strcpy(temp, lnode[0].word); result=1; count=1; price[0]=lnode[0].price;
		for(i=1; i<a; i++){
			if(strcmp(temp, lnode[i].word)!=0){
				strcpy(temp, lnode[i].word);
				result++; count=1; price[0]=lnode[i].price;
			}
			else{
				for(j=0; j<count; j++){
					if(price[j]==lnode[i].price)
						break;
				}
				if(j==count){
					price[count++]=lnode[i].price;
					result++;
				}
			}
		}
		printf("%d\n", result);
	}
	return 0;
}
