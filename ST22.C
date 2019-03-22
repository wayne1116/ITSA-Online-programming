#include<stdio.h>
#include<stdlib.h>
int main()
{
		int a, i, count=0, number=0;;
		char *ptr1, *ptr2;
		char word1[10], word2[10];

		while(scanf("%d", &a)!=EOF){
				for(i=0; i<a; i++){
						scanf("%s %s", word1, word2);
						ptr1=word1;
						ptr2=word2;

						count=7;
						while(*ptr1!='\0'){
								if(*ptr1=='1'){
										number+=(1<<count);
								}
								count--;
								ptr1++;
						}

						count=7;
						while(*ptr2!='\0'){
								if(*ptr2=='1'){
										number+=(1<<count);
								}
								count--;
								ptr2++;
						}
						printf("%d\n", number);
						number=0;

				}
		}
		return 0;
}
