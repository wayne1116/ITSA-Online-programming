#include<stdio.h>
#include<stdlib.h>
int main()
{
		int row, col, i, j, temp, mat1[10][10];
		while(scanf("%d %d", &row, &col)!=EOF){
				for(i=0; i<row; i++){
						for(j=0; j<col; j++)
								scanf("%d", &mat1[i][j]);
				}
				for(i=0; i<row; i++){
						for(j=0; j<col; j++){
								scanf("%d", &temp);
								mat1[i][j]+=temp;
						}
				}

				for(i=0; i<row; i++){
						for(j=0; j<col-1; j++)
								printf("%d ", mat1[i][j]);
						printf("%d\n", mat1[i][j]);
				}
		}
		return 0;
}
