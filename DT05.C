#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define SWAP(x, y, z) ((z)=(x), (x)=(y), (y)=(z))
void pro(char *p)
{
		int len=strlen(p), i, temp;
		for(i=0; i<len/2; i++)
				SWAP(p[i], p[len-i-1], temp);
}
int main()
{
		char line1[1024], line2[1024], *ptr1, *ptr2;
		short state1, state2, carry;
		while(scanf("%s%s", line1, line2)!=EOF){
				ptr1=line1; ptr2=line2;
				printf("a=%s\n", ptr1);
				printf("b=%s\n", ptr2);
				state1=state2=0;
				if(*ptr1=='-'){
						ptr1++;
						state1=1;
				}
				pro(ptr1);
				if(*ptr2=='-'){
						ptr2++;
						state2=1;
				}
				pro(ptr2);

		}
		return 0;
}
