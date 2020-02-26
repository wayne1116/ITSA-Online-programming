#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a=0;
	int max=0;
	int count=0;
	int temp=0;
	int weight[200000];
	int parent[200000][4];
	int root[200000];
	int i=0, j=0;
	
	while(scanf("%d", &a)!=EOF){
		for(i=0; i<a; i++){
			scanf("%d", &weight[i]);
		}
		
		count=0;
		for(i=1; i<a; i++){
			scanf("%d", &temp);
			parent[i][0]=temp;
			if(temp==0){
				parent[i][1]=1;
				root[count++]=i;
				parent[i][2]=weight[i];
			} else{
				parent[i][1]=0;
				parent[i][2]=0;
			}
		}
		
		for(i=1; i<a; i++){
			if(!parent[i][1]){
				j=i;
				while(!parent[j][1]){
					j=parent[j][0];
				}
				parent[j][2]+=weight[i];
			}
		}
		
		max=0;
		for(i=0; i<count; i++)
			if(max<parent[root[i]][2])
				max=parent[root[i]][2];
		printf("%d\n", max);

	}
	return 0;
}
