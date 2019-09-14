#include<stdio.h>
#include<stdlib.h>
int main()
{
		int count, i, len, number, j;
		float result, temp;
		char line[1024], *ptr;
		while(fgets(line, 10, stdin)!=NULL){
				len=atoi(line);
				for(i=0; i<len; i++){
						fgets(line, 1024, stdin);
						ptr=line;
						if(*ptr=='J' || *ptr=='Q' || *ptr=='K')
								result=0.5;
						else if(*ptr=='A')
								result=1;
						else{
								number=atoi(ptr);
								result=number;
						}
						while(*ptr){
								if(*ptr==' '){
										ptr++;
										if(*ptr=='J' || *ptr=='Q' || *ptr=='K')
												result+=0.5;
										else if(*ptr=='A')
												result+=1;
										else{
												number=atoi(ptr);
												result+=number;
										}
								}
								ptr++;
						}
						if(result>10.5)
								printf("-1\n");
						else if(result==10.5)
								printf("0\n");
						else{
								temp=10.5-result; count=0;
								for(j=1; j<=10; j++){
										if(temp<j)
												count++;
								}
								count=count*100/13.0;
								printf("%d\n", count);
						}
				}
		}
		return 0;
}
