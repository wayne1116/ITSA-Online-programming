#include<stdio.h>
#include<stdlib.h>
#define SWAP(x, y, z) ((z)=(x), (x)=(y), (y)=(z))
int main()
{
		int i, j;
		float number[3], temp, result;
		while(scanf("%f %f %f", &number[0], &number[1], &number[2])!=EOF){
				for(i=0; i<2; i++){
						for(j=0; j<2-i; j++){
								if(number[j]<number[j+1])
										SWAP(number[j], number[j+1], temp);
						}
				}
				if(number[0]>=number[1]+number[2])
						printf("invalid\n");
				else{
						result=number[1]*number[1]+number[2]*number[2]-number[0]*number[0];
						if(result==0)
								printf("right\n");
						else if(result<0)
								printf("obtuse\n");
						else
								printf("acute\n");
				}
		}
		return 0;
}

