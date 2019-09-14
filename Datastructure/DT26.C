#include<stdio.h>
#include<stdlib.h>
int main()
{
		char line[100][100], *ptr, *ptr1;
		int n1, n2, m1, m2, i=0, j, k, *state;
		while(scanf("%s", line[i])!=EOF){
				if(line[i][0]=='0' && line[i][2]=='0' && line[i][4]=='0' && line[i][6]=='0'){
						state=(int *)calloc(100, sizeof(int));
						for(j=0; j<i-1; j++){
								n1=atoi(line[j]); ptr=line[j];
								while(*ptr){
										if(*ptr=='.'){
												ptr++;
												n2=atoi(ptr);
												break;
										}
										ptr++;
								}
								for(k=j+1; k<i; k++){
										m1=atoi(line[k]); ptr1=line[k];
										while(*ptr1){
												if(*ptr1=='.'){
														ptr1++;
														m2=atoi(ptr1);
														break;
												}
												ptr1++;
										}
										if(n1==m1 && n2==m2 && !state[k]){
												while(*ptr){
														if(*ptr==','){
																ptr++;
																break;
														}
														ptr++;
												}
												while(*ptr1){
														if(*ptr1==','){
																ptr1++;
																break;
														}
														ptr1++;
												}
												printf("machines %s and %s are on the same local network.\n", ptr, ptr1);
												state[k]=1;
										}
								}
						}
						i=0;
						free(state);
				}
				else
						i++;
		}
		return 0;
}
