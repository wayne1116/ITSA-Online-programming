#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#define MAX 100000
int main()
{
	char line[MAX], *ptr;
	int count, result, total, i, j, temp[1024], number[1024];
	while(fgets(line, MAX, stdin)!=NULL){
		ptr=line; count=0; result=0; total=0; i=0;
		if(isdigit(*ptr)){
			number[total]=atoi(ptr);
			result+=number[total];
			count++;
		}
		else{
			temp[i++]=total;
		}
		total++;
		while(*ptr){
			if(*ptr==' '){
				ptr++;
				if(isdigit(*ptr)){
					number[total]=atoi(ptr);
					result+=number[total];
					count++;
				}
				else{
					temp[i++]=total;
				}
				total++;
			}
			ptr++;
		}
		result=result/count;
		for(j=0; j<i; j++)
			number[temp[j]]=result;
		for(j=0; j<total-1; j++)
			printf("%d ", number[j]);
		printf("%d\n", number[j]);
	}
	return 0;
}
