#include<stdio.h>
#include<stdlib.h>
int main()
{
		int i, j, number, startrow, startcol;
		int result[100][100];
		while(scanf("%d", &number)!=EOF){
				startrow=0; startcol=number/2;
				for(i=0; i<number; i++)
						for(j=0; j<number; j++)
								result[i][j]=0;
				for(i=1; i<=number*number; i++){
						if(result[startrow][startcol]==0)
								result[startrow][startcol]=i;
						else{
								startrow=(startrow+2)%number;
								startcol=(startcol-1+number)%number;
								result[startrow][startcol]=i;
						}
						startrow=(startrow-1+number)%number;
						startcol=(startcol+1)%number;
				}

				for(i=0; i<number; i++){
						for(j=0; j<number-1; j++){
								printf("%d ", result[i][j]);
						}
						printf("%d\n", result[i][j]);
				}
		}
		return 0;
}




