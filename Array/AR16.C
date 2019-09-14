#include<stdio.h>
#include<stdlib.h>
int main()
{
		int number, i, j, k, l, a, b, array[10000], max, min, min1, temp[10000], temp1[10000];
		char line[100000], line1[10], *ptr;
		while(fgets(line1, 10, stdin)!=NULL){
				for(b=0; b<atoi(line1); b++){
						fgets(line, 100000, stdin);
						ptr=line;
						array[0]=atoi(ptr);
						i=1;
						while(*ptr){
								if(*ptr==' '){
										ptr++;
										array[i++]=atoi(ptr);
								}
								ptr++;
						}
						max=-1; min=2147483647;
						for(j=0; j<i; j++){
								if(max<=array[j]){
										if(max<array[j]){
												max=array[j];
												temp[0]=j;
												k=1;
										}
										else
												temp[k++]=j;
								}
								if(min>=array[j]){
										if(min>array[j]){
												min=array[j];
												temp1[0]=j;
												l=1;
										}
										else
												temp1[l++]=j;
								}
						}
						min1=2147483647;
						for(j=0; j<k; j++){
								for(a=0; a<l; a++){
										if(min1>(temp[j]-temp1[a]>=0?temp[j]-temp1[a]:temp1[a]-temp[j]))
												min1=(temp[j]-temp1[a]>=0?temp[j]-temp1[a]:temp1[a]-temp[j]);
								}
						}
						printf("%d %d\n", max-min, min1);
				}
		}
		return 0;
}
