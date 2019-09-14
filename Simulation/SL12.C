#include<stdio.h>
#include<stdlib.h>
int main()
{
		int c;
		while((c=getchar())!=EOF){
				if(c>=97 && c<=122){
						c=c-97+65;
						c=90-(c-65);
						printf("%c", c);
				}
				else if(c>=65 && c<=90){
						c=c-65+97;
						c=122-(c-97);
						printf("%c", c);
				}
				else if(c>=48 && c<=57){
						if(c==57)
								printf("0");
						else
								printf("%c", c+1);
				}
				else
						printf("%c", c);
		}
		return 0;
}
