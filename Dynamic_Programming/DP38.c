#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a=0;
	int i=0, j=0, k=0;
	int max=0;
	int map[11][11];
	int area[11][11];
	int result=0, result1=0;
	int state=0;
	scanf("%d", &a);
	
	for(i=0; i<a; i++){
		for(j=0; j<a; j++){
			scanf("%d", &map[i][j]);
			area[i][j]=0;
		}
	}
	state=0;
	for(i=0; i<a; i++){
		if(map[0][i]==0){
			area[0][i]=1;
			state=1;
		}
	}
	
	if(state) max=1;
	else max=0;
	
	for(i=1; i<a; i++){
		for(j=0; j<a; j++){
			if(map[i][j]==0)
				area[i][j]=area[i-1][j]+1;
		}
		
		for(j=0; j<a; j++){
			if(map[i][j]==0){
				result=area[i][j];
				for(k=j-1; k>=0 && area[i][k]>=area[i][j] ; k--)
					result+=area[i][j];
				
				for(k=j+1; k<a && area[i][k]>=area[i][j] ; k++)
					result+=area[i][j];
				
				if(result/area[i][j]>area[i][j])
					result1=area[i][j]*area[i][j];
				else
					result1=(result/area[i][j])*(result/area[i][j]);
				
				if(max<result1)
					max=result1;
			}
		}
	}
	
	printf("%d\n", max);
	return 0;
}
