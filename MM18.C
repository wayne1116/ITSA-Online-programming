#include<stdio.h>
#include<stdlib.h>
int main()
{
		int a, i, j, min, result=0, x=0, y=0, com;
		int number[256][256];
		while(scanf("%d", &a)!=EOF){
				for(i=0; i<a; i++){
						scanf("%d %d", &number[i][0], &number[i][1]);
				}
				min=2147483647;
				for(i=0; i<a; i++){
						com=0;
						for(j=0; j<a; j++){
								result=0;
								result+=(number[i][0]-number[j][0])*(number[i][0]-number[j][0]);
								result+=(number[i][1]-number[j][1])*(number[i][1]-number[j][1]);
								if(com<result)
										com=result;
						}
						if(min>com){
								min=com;
								x=number[i][0];
								y=number[i][1];
						}
						else if(min==com){
								if(x>number[i][0]){
										x=number[i][0];
										y=number[i][1];
								}
								else if(x==number[i][0]){
										if(y>number[i][1])
												y=number[i][1];
								}
						}
				}
				printf("%d %d\n", x, y);
		}
		return 0;
}
