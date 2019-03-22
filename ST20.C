#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
int main()
{
		char line[32], *ptr;
		int count=0, i, j;
		float *number;

		while(scanf("%s", line)!=EOF){
				ptr=line;
				number=(float *)malloc(32*sizeof(float));
				while(*ptr!='\0'){
						if(isdigit(*ptr))
								number[count]=(float)(*ptr-48);
						else
								number[count]=(float)*ptr;
						ptr++;
						count++;
				}
				
				while(number[0]==36 || number[0]==37){
						for(i=0; i<count-1; i++){
								if(number[i]==36){
										if(number[i+1]!=36 && number[i+1]!=37 && number[i+2]!=36 && number[i+2]!=37){
												number[i]=(number[i+1]+number[i+2])/2;

												for(j=i+1; j<count-2; j++)
														number[j]=number[j+2];
												count-=2;
												i--;
										}
								}
								else if(number[i]==37){
										if(number[i+1]!=36 && number[i+1]!=37 && number[i+2]!=36 && number[i+2]!=37){
												number[i]=(number[i+1]-number[i+2])/2;

												for(j=i+1; j<count-2; j++)
														number[j]=number[j+2];
												count-=2;
												i--;
										}
								}
						}
				}
				printf("%f\n", number[0]);
				count=0;
				free(number);
		}
		return 0;
}

