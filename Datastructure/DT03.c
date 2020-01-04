#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
int main()
{
	int number, len, i, j, k;
	float totalcount, count, result, max;
	char line[1024];
	while(scanf("%d%s", &number, line)!=EOF){
		len=strlen(line); max=0;
		for(i=0; i<len-number; i++){
			for(j=i+number; j<=len; j++){
				totalcount=count=0;
				for(k=i; k<j; k++){
					if(tolower(line[k])=='c' || tolower(line[k])=='g')
						count++;
					totalcount++;
				}
				result=count/totalcount;
				if(result>max)
					max=result;
			}
		}
		printf("%.3f\n", max);
	}
	return 0;
}
