#include<stdio.h>
#include<stdlib.h>
#define swap(x, y, z) ((z)=(x), (x)=(y), (y)=(z))
int main()
{
		while(scanf("%d", &a)!=EOF){
				for(i=0; i<a; i++){
						scanf("%d %d", &b, &c);
						number=(char *)mallco((b+1)*sizeof(char));
						for(j=0; j<b-c; j++)
								number[j]='0';
						for(j=b-c; j<b; j++)
								number[j]='1';
						number[j]='\0';


				}
		}
		return 0;
}

