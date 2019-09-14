#include<stdio.h>
#include<stdlib.h>
int main()
{
		int row, col, i, j;
		float number1[10][10], number;
		while(scanf("%d %d", &row, &col)!=EOF){
				for(i=0; i<row; i++){
						for(j=0; j<col; j++){
								scanf("%f", &number1[i][j]);
						}
				}
				for(i=0; i<row; i++){
						for(j=0; j<col; j++){
								scanf("%f", &number);
								printf("[%.1f]", (number+number1[i][j])/2);
						}
						printf("\n");
				}
		}
		return 0;
}
