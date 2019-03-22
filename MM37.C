#include<stdio.h>
#include<stdlib.h>
int main()
{
		int i, j, k, l;
		int number, row, col, total, matrix[100][100], matrix1[100][100], matrix2[100][100];
		while(scanf("%d", &number)!=EOF){
				for(i=0; i<number; i++){
						scanf("%d %d", &row, &col);
						for(j=0; j<row; j++){
								for(k=0; k<col; k++){
										scanf("%d", &matrix1[j][k]);
								}
						}
						for(j=0; j<col; j++){
								for(k=0; k<row; k++){
										scanf("%d", &matrix2[j][k]);
								}
						}
						for(j=0; j<row; j++){
								for(k=0; k<row; k++){
										total=0;
										for(l=0; l<col; l++)
												total+=(matrix1[j][l]*matrix2[l][k]);
										matrix[j][k]=total;
								}
						}
						if(i==numbe-1)
								break;
						for(j=0; j<row; j++){
								for(k=0; k<row-1; k++)
										printf("%d ", matrix[j][k]);
								printf("%d\n", matrix[j][k]);
						}
						printf("\n");
				}
				for(j=0; j<row; j++){
						for(k=0; k<row-1; k++)
								printf("%d ", matrix[j][k]);
						printf("%d\n", matrix[j][k]);
				}
		}
		return 0;
}
