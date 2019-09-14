#include<stdio.h>
#include<stdlib.h>
int main()
{
		int a, i, j, k, number;
		int result[1024][3];
		while(scanf("%d", &a)!=EOF){
				for(i=0; i<a; i++){
						scanf("%d", &number);
						k=-1;
						for(j=2; j<=number; j++){
								if(number%j==0){
										k++;
										result[k][0]=j;
										result[k][1]=0;
								}
								while(number!=0){
										if(number%j==0){
												number/=j;
												result[k][1]++;
										}
										else break;
								}
						}
						for(j=0; j<k; j++){
								if(result[j][1]==1)
										printf("%d*", result[j][0]);
								else
										printf("%d^%d*", result[j][0], result[j][1]);
						}
						if(result[j][1]==1)
								printf("%d\n", result[j][0]);
						else
								printf("%d^%d\n", result[j][0], result[j][1]);
				}
		}
		return 0;
}
