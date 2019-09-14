#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node{
		char word[1024];
		double price;
};
int cmp(const void *x, const void *y)
{
		if(strcmp(((struct node *)x)->word, ((struct node *)y)->word)==0)
				return ((struct node *)x)->price-((struct node *)y)->price;
		return strcmp(((struct node *)x)->word, ((struct node *)y)->word);
}
int main()
{
		int a, i, temp;
		double result, result1, count;
		struct node lnode[100];
		while(scanf("%d", &a)!=EOF){
				for(i=0; i<a; i++){
						scanf("%s%lf", lnode[i].word, &lnode[i].price);
				}
				qsort(lnode, a, sizeof(struct node), cmp);
				result=lnode[0].price; count=1; result1=0;
				for(i=1; i<a; i++){
						if(strcmp(lnode[i-1].word, lnode[i].word)!=0){
								result1+=(result/count);
								result=lnode[i].price; count=1;
						}
						else{
								result+=lnode[i].price;
								count++;
						}
				}
				result1+=(result/count);
				printf("%.2lf\n", result1);
		}
		return 0;
}
