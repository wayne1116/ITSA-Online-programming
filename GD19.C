#include<stdio.h>
#include<stdlib.h>
int main()
{
		char line[10000];
		char *ptr;
		int i=0, j=0, k=0;
		int number[1024];
		int max=0;
		int count=0;
		int number1=0;
		while(fgets(line, 10000, stdin)!=NULL){
				ptr=line;
				number[0]=atoi(ptr);
				i=1;
				while(*ptr){
						if(*ptr==' '){
								ptr++;
								number[i++]=atoi(ptr);
						}
						ptr++;
				}
				max=1;
				count=1;
				number1=number[0];
				for(j=1; j<i; j++){
						if(number1==number[j])
								count++;
						else break;
				}
				max=count;
				for(k=j; k<i; k++){
						if(number1==number[k])
								count++;
						else{
								if(max<count)
										max=count;
								number1=number[k];
								count=1;
						}
				}
				printf("%d\n", max);
		}
		return 0;
}
