#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
struct node{
	int x;
	int y;
};
int main()
{
	int a=0, b=0;
	int i=0, j=0, k=0;
	int min=0, temp=0;
	struct node lnode[10000];
	while(scanf("%d", &a)!=EOF){
		for(i=0; i<a; i++){
			scanf("%d", &b);
			for(j=0; j<b; j++)
				scanf("%d%d", &lnode[j].x, &lnode[j].y);
			min=INT_MAX;
			for(j=0; j<b-1; j++){
				for(k=j+1; k<b; k++){
					temp=(lnode[j].x-lnode[k].x)*(lnode[j].x-lnode[k].x)+(lnode[j].y-lnode[k].y)*(lnode[j].y-lnode[k].y);
					if(temp<min)
						min=temp;
				}
			}
			printf("%d\n", min);
		}
	}
	return 0;
}
