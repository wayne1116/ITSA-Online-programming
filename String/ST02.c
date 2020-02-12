#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	char line[10], *ptr;
	int len, i, result=1, total=0;
	
	while(scanf("%s", line)!=EOF){
		len=strlen(line);
		ptr=line;
		while(*ptr!='\0'){
			result=1;
			for(i=0; i<len-1; i++){
				result*=26;
			}
			total+=(*ptr-64)*result;
				ptr++;
				len--;
				result=0;
			}
			printf("%d\n", total);
			total=result=0;
	}
	return 0;
}
