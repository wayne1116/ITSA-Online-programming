#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int init, len, state, i, length;
	char line1[1024], line2[1024], *ptr1, *ptr2, *find, result[1024], temp;
	while(scanf("%s %s", line1, line2)!=EOF){
		ptr1=line1; len=0; state=0; length=strlen(ptr1);
		for(i=0; i<1024; i++)
			result[i]='\0';
		while(*ptr1){
			for(i=length; i>0; i--){
				temp=ptr1[i]; ptr1[i]='\0';
				find=strstr(line2, ptr1);
				if(find){
					if(strlen(ptr1)>1){
						if(strlen(result)<strlen(ptr1) || (strlen(result)==strlen(ptr1) && strcmp(result, ptr1)>0))
								strcpy(result, ptr1);
						state=1;
					}
				}
				ptr1[i]=temp;
			}
			ptr1++;
		}
		if(!state){
			ptr1=line1; ptr2=line2; init=1024;
			while(*ptr1){
				ptr2=line2;
				while(*ptr2){
					if(*ptr1==*ptr2 && init>*ptr1){
						init=*ptr1;
						break;
					}
					ptr2++;
				}
				ptr1++;
			}
			printf("1 %c\n", init);
		}
		else
			printf("%d %s\n", strlen(result), result);
	}
	return 0;
}
