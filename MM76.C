#include<stdio.h>
#include<stdlib.h>
struct node{
		int x;
		int y;
};
int cmp(const void *x, const void *y)
{
		if(((struct node *)x)->x==((struct node *)y)->x)
				return ((struct node *)x)->y-((struct node *)y)->y;
		return ((struct node *)x)->x-((struct node *)y)->x;
}
int main()
{
		int number, i, state;
		float totalx, totaly, centerx, centery, radius;
		struct node *point;
		while(scanf("%d %f", &number, &radius)!=EOF){
				point=(struct node *)malloc(number*sizeof(struct node));
				totalx=totaly=0;
				for(i=0; i<number; i++){
						scanf("%d %d", &point[i].x, &point[i].y);
						totalx+=point[i].x;
						totaly+=point[i].y;
				}
				qsort(point, number, sizeof(struct node), cmp);
				centerx=totalx/number; centery=totaly/number;
				printf("(%.2f,%.2f)\n", centerx, centery);
				for(i=0, state=0; i<number; i++){
						totalx=point[i].x-centerx; totaly=point[i].y-centery;
						if(totalx*totalx+totaly*totaly<radius*radius){
								state=1;
								printf("(%d,%d)", point[i].x, point[i].y);
						}
				}
				if(!state)
						printf("Empty");
				printf("\n");
				free(point);
		}
		return 0;
}
