#include<stdio.h>
#include<stdlib.h>
int main()
{
		int i, j, a;
		int sample[]={6,28,496,8128,33550336};
		while(scanf("%d", &a)!=EOF){
				for(i=0; i<5; i++){
						if(a<sample[i])
								break;
				}
				for(j=0; j<i; j++)
						printf("%d ", sample[j]);
				printf("is perfect number\n");
		}
		return 0;
}

