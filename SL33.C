#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
		short *result;
		int i, j, k, l, m, carry, a, len, number[100];
		char line[100];
		while(scanf("%d", &a)!=EOF){
				for(i=0; i<a; i++){
						scanf("%s", line);
						len=strlen(line);
						for(j=0; j<len; j++)
								number[j]=line[len-j-1]-48;
						result=(short *)calloc(100, sizeof(short)); 
						for(j=0; j<len; j++){
								for(k=len-1; k>=j; k--){
										for(l=j, m=0; l<=k; l++, m++){
												printf("%d", number[l]);
												result[m]+=number[l];
										}
										printf("\n");
								}
						}
						carry=0;
						for(j=0; j<100; j++){
								if(carry+result[j]>=10){
										carry=result[j]/10;
										result[j]=result[j]%10;
								}
								else
										carry=0;
						}
						for(j=99; j>=0; j--)
								if(result[j]!=0)
										break;
						for(k=j; k>=0; k--)
								printf("%d", result[k]);
						printf("\n"); free(result);
				}
		}
		return 0;
}
