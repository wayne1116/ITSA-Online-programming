#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define SWAP(x, y, z) ((z)=(x), (x)=(y), (y)=(z))
struct node{
	int len;
	char com[10];
	short number[100];
};
void swi(short *p, int a, int b)
{
	int i;
	short temp;
	for(i=0; i<4; i++)
		SWAP(p[a+i], p[b-i-1], temp);
}
int main()
{
	int a, b, c, i, j, k, l, m, k1, number;
	struct node lnode[1024];
	short result[100];
	char line1[1024], line2[1024], *ptr;
	while(scanf("%d", &a)!=EOF){
		for(i=0; i<a; i++){
			scanf("%d%d", &k, &m);
			for(j=0; j<k; j++){
				scanf("%s %s", line1, line2);
				ptr=line1;
				number=atoi(ptr); l=0;
				while(number>0){
					lnode[j].number[l++]=number%2;
					number/=2;
				}
				for(c=l; c<8; c++)
					lnode[j].number[c]=0;
				b=1;
				while(*ptr){
					if(*ptr=='/'){
						ptr++;
						lnode[j].len=atoi(ptr);
						break;
					}
					if(*ptr=='.'){
						ptr++;
						number=atoi(ptr); l=8*b;
						while(number>0){
							lnode[j].number[l++]=number%2;
							number/=2;
						}
						for(c=l; c<8*(b+1); c++)
							lnode[j].number[c]=0;
						b++;
					}
					ptr++;
				}
				strcpy(lnode[j].com, line2);
				swi(lnode[j].number, 0, 8); swi(lnode[j].number, 8, 16);
				swi(lnode[j].number, 16, 24); swi(lnode[j].number, 24, 32);
			}
			scanf("%s", line2);
			for(j=0; j<m; j++){
				scanf("%s", line1);
				ptr=line1; number=atoi(ptr); l=0;
				while(number>0){
					result[l++]=number%2;
					number/=2;
				}
				for(c=l; c<8; c++)
					result[c]=0;
				b=1;
				while(*ptr){
					if(*ptr=='.'){
						ptr++;
						number=atoi(ptr); l=8*b;
						while(number>0){
							result[l++]=number%2;
							number/=2;
						}
						for(c=l; c<8*(b+1); c++)
							result[c]=0;
						b++;
					}
					ptr++;
				}
				swi(result, 0, 8); swi(result, 8, 16);
				swi(result, 16, 24); swi(result, 24, 32);
				for(l=0; l<k; l++){
					for(k1=0; k1<lnode[l].len; k1++){
						if(lnode[l].number[k1]!=result[k1])
							break;
					}
					if(k1==lnode[l].len){
						printf("%s\n", lnode[l].com);
						break;
					}
				}
				if(l==k){
					printf("%s\n", line2);
				}
			}
		}
	}
	return 0;
}
