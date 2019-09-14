#include<stdio.h>
#include<stdlib.h>
int main()
{
		int a, b, i, j, len, count=0;
		char *ptr1, *ptr2, word[100][1024], edv[100][1024];
		while(scanf("%d", &a)!=EOF){
				scanf("%d", &len);
				for(i=0; i<a; i++){
						for(j=0; j<len; j++){
								scanf("%s", word[i]);
						}
						printf("%s\n", word[i]);
				}
				scanf("%d", &b);
				for(i=0; i<b; i++)
						for(j=0; j<len; j++)
								scanf("%c", &edv[i][j]);

				for(i=0; i<a; i++){
						ptr1=word[i];
						for(j=0; j<b; j++){
								ptr2=edv[j];
								while(*ptr1!='\0'){
										if(*ptr1==*ptr2)
												count++;
										ptr1++;
										ptr2++;
								}
								printf("Suspect witness%d with evidence%d similarity %d%%\n", j+1, i+1, count/len*100);
								count=0;
						}
				}
		}
		return 0;
}

								
