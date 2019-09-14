#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
int main()
{
		int number[]={10,11,12,13,14,15,16,17,34,18,19,20,21,22,35,23,24,25,26,27,28,29,32,30,31,33};
		int a, i, j, number1, result, mul;
		char line[1024]={'\0'};
		while(scanf("%d", &a)!=EOF){
				for(i=0; i<a; i++){
						scanf("%s", line);
						if(!isalpha(line[0])){
								printf("%d ID check XX\n", i+1);
								continue;
						}
						number1=number[toupper(line[0])-65];
						result=(number1/10); result+=((number1%10)*9);
						for(j=1, mul=8; j<9; j++, mul--){
								if(!isdigit(line[j]))
										break;
								result+=((line[j]-48)*mul);
						}
						if(!isdigit(line[j])){
								printf("%d ID check XX\n");
								continue;
						}
						result=result%10;
						if(result!=0)
								result=10-result;
						if(line[9]-48==result)
								printf("%d ID check OK\n", i+1);
						else
								printf("%d ID check XX\n", i+1);
				}
		}
		return 0;
}
