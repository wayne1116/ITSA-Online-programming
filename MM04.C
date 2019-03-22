#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
		int a, sum, i, j;
		char number[1024];
		char sample[10][20]={"6","28","496","8128","33550336","8589869056","137438691328"};
		while(scanf("%d", &a)!=EOF){
				for(j=0; j<a; j++){
						scanf("%s", number);
						for(i=0; i<7; i++){
								if(strcmp(sample[i], number)==0){
										printf("perfect\n");
										break;
								}
						}
						if(i>=7)
								printf("nonperfect\n");
				}
		}
		return 0;
}
