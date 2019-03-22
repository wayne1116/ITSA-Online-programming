#include<stdio.h>
#include<stdlib.h>
int algor(int x, int y)
{
		if(y==0)
				return x;
		return algor(y, x%y);
}
int main()
{
		int i, j, result, number[1024];
		while(scanf("%d", &number[i])!=EOF){
				i++;
		}
		for(j=0; j<i-1; j++){
				result=algor(number[j],number[j+1]);
				number[j+1]=number[j]*number[j+1]/result;
		}
		printf("Lowest common multiple: %d\n", number[i-1]);
		return 0;
}

