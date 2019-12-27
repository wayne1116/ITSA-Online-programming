#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i, j;
	int row, col, c;
	int number1[10][10],number2[10][10];

	while(scanf("%d%d%d", &row, &col, &c)!=EOF){
		for(i=0; i<row; i++){
			for(j=0; j<col; j++){
				scanf("%d", &number1[i][j]);
			}
		}

		for(i=0; i<row; i++){
			for(j=0; j<col; j++){
				scanf("%d", &number2[i][j]);
				number1[i][j]+=number2[i][j];
			}
		}

		for(i=0; i<col; i++){
			for(j=0; j<row-1; j++){
				printf("%d ", c*number1[j][i]);
			}
			printf("%d\n", c*number1[j][i]);
		}
	}
	return 0;
}								
