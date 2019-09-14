#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 10000
int cmp(const void *x, const void *y)
{
		return strcmp((char *)x, (char *)y);
}
int main()
{
		char line[64][1024], word[MAX];
		int len=0, number=0, i=0;
		while(fgets(word, MAX, stdin)!=NULL){
				strcpy(line[number], word);
				number++;
		}
		qsort(line, number, sizeof(line[0]), cmp);
		for(i=0; i<number; i++)
				printf("%s", line[i]);
		return 0;
}

