#include<stdio.h>
#include<stdlib.h>
#define SWAP(x, y, z) ((z)=(x), (x)=(y), (y)=(z))
int main()
{
		int i, j, k, l, a, b, temp, carry, result[1024]={0};
		char line[1024], *ptr;
		while(scanf("%d", &a)!=EOF){
				for(l=0; l<a; l++){
						scanf("%d%s", &b, line);
						ptr=line; i=0;
						while(*ptr){
								temp=*ptr; j=i;
								while(temp>0){
										result[i++]=temp%16;
										temp/=16;
								}
								SWAP(result[j], result[i-1], temp);
								ptr++;
						}
						for(j=0; j<i-2*b; j+=2*b){
								for(k=0; k<2*b; k++)
										result[j+2*b+k]+=result[j+k];
						}
						carry=0;
						for(j=i-1; j>=i-2*b; j--){
								result[j]+=carry;
								if(result[j]+carry>=16){
										carry=result[j]/16;
										result[j]=result[j]%16;
								}
								else
										carry=0;
						}
						for(j=i-2*b; j<i; j++){
								if(result[j]>=10)
										printf("%c", result[j]+55);
								else
										printf("%d", result[j]);
						}
						printf("\n");
				}
		}
		return 0;
}
