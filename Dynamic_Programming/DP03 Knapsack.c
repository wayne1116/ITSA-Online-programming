#include<stdio.h>
#include<stdlib.h> 
inline int max(int a, int b)
{
	return a>b?a:b;
}
int value[1000001];
int main()
{
	int i=0, j=0, a=0;
	int weight[1024], value1[1024];
	int w=0;
	while(scanf("%d", &a)!=EOF){
		for(i=0; i<a; i++)
			scanf("%d%d", &weight[i], &value1[i]);
		scanf("%d", &w);
		for(i=0; i<=w; i++)
			value[i]=0;
		for(i=0; i<a; i++){
			for(j=w; j-weight[i]>=0; j--){
				value[j]=max(value[j], value[j-weight[i]]+value1[i]);
			}
		}	
		printf("%d\n", value[w]);
	}
	return 0;
}
