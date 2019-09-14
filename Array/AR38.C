#include<stdio.h>
#include<stdlib.h>
int main()
{
		int a, n, m, k;
		int i, j, l, count=0;
		int number[1000];
		while(scanf("%d", &a)!=EOF){
				for(i=0; i<a; i++){
						scanf("%d%d%d", &n, &m, &k);
						for(j=0; j<n; j++)
								scanf("%d", &number[j]);
						if(m+m<k)
								printf("0\n");
						else{
								for(j=0; j<n-1; j++){
										if(number[j]!=0){
												for(l=j+1; l<n; l++){
														if(number[l]!=0 && number[l]+number[j]==k){
																count++;
																number[l]=number[j]=0;
																break;
														}
												}
										}
								}
								printf("%d\n", count);
								count=0;
						}
				}
		}
		return 0;
}


