#include<stdio.h>
#include<stdlib.h>
int main()
{
		int i, a, n, state;
		short *number;
		while(scanf("%d", &a)!=EOF){
				number=(short *)calloc(a+1, sizeof(short));
				for(i=0; i<a-2; i++){
						scanf("%d", &n);
						number[n]=1;
				}
				state=0;
				for(i=1; i<=a; i++){
						if(!number[i]){
								if(!state){
										printf("%d ", i);
										state=1;
								}
								else{
										printf("%d\n", i);
										break;
								}
						}
				}
				free(number);
		}
		return 0;
}
