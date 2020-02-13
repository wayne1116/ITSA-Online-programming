#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define OUT 0
#define IN 1
int cmp(const void *x, const void *y)
{
	return strcmp((char *)x, (char *)y);
}
int main()
{
	int a, i, j, k, number, state;
	char *ptr1, *ptr2, line[10001][64];
	
	while(scanf("%d", &a)!=EOF){
		for(i=0; i<a; i++){
			scanf("%d", &number);
			for(j=0; j<number; j++)
				scanf("%s", line[j]);
			qsort(line, number, sizeof(line[0]), cmp);
			state=OUT;
			for(j=0; j<number; j++){
				for(k=j+1; k<number; k++){
					if(line[j][0]==line[k][0]){
						ptr1=line[j];
						ptr2=line[k];
						while(*ptr1){
							if(*ptr1!=*ptr2)
								break;
							ptr1++;
							ptr2++;
						}
						if(*ptr1=='\0'){
							state=IN;
							break;
						}
					}
				}
				if(state==IN)
					break;
			}
			if(state==IN)
				printf("No\n");
			else
				printf("Yes\n");
		}
	}
	return 0;
}
