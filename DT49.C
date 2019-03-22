#include<stdio.h>
#include<stdlib.h>
int main()
{
		double time[1024], current, temp;
		float price[1024], max;
		int a, b, i, j, k;
		scanf("%d", &a);
		for(i=0; i<a; i++){
				scanf("%lf %f", &time[i], &price[i]);
		}
		scanf("%d", &b);
		for(i=0; i<b; i++){
				scanf("%lf", &current);
				for(j=0; j<a; j++){
						if(current==time[j]){
								j++;
								break;
						}
						else if(current<time[j]){
								break;
						}
				}
				max=0;
				for(k=j-1; k>=0; k--){
						if(current-time[k]<=604800000.0){
								if(max<price[k])
										max=price[k];
						}
						else
								break;
				}
				printf("%.2f\n", max);
		}
		return 0;
}
