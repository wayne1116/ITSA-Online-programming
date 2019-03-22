#include<stdio.h>
#include<stdlib.h>
int main()
{
		int a, b, i, j, number[100][100], temp[100], result;
		while(scanf("%d%d", &a, &b)!=EOF){
				for(i=0; i<a; i++){
						for(j=0; j<b; j++){
								scanf("%d", &number[i][j]);
						}
				}
				for(i=0; i<b; i++)
						scanf("%d", &temp[i]);
				for(i=0; i<a; i++){
						result=0;
						for(j=0; j<b; j++)
								result+=(number[i][j]*temp[j]);
						printf("%d\n", result);
				}
		}
		return 0;
}
