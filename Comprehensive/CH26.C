#include<stdio.h>
#include<stdlib.h>
int main()
{
		int i, j, k, l, a, number, temp, count, result;
		while(scanf("%d", &a)!=EOF){
				for(l=0; l<a; l++){
						scanf("%d", &number);
						temp=number-100; count=0;
						for(i=1; ; i++){
								if(49*i>temp)
										break;
								for(j=1; ; j++){
										if(49*i+9*j>temp)
												break;
										for(k=1; ; k++){
												result=49*i+9*j+4*k;
												if(result==temp && 100-i-j-k>0){
														printf("%d,%d,%d,%d\n", i, j, k, 100-i-j-k);
														count++;
														break;
												}
												else if(result>temp)
														break;
										}
								}
						}
						printf("%d\n", count);
				}
		}
		return 0;
}
