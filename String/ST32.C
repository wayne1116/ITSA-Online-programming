#include<stdio.h>
#include<stdlib.h>
#define SWAP(x, y, z) ((z)=(x), (x)=(y), (y)=(z))
int line[80][80], count1=1, number1;
int number[80], location[80];
void rec(int a, char *p, int b)
{
		int i;
		if(a==b-1){
				for(i=0; i<number[a]; i++){
						p[location[a]]=line[a][i];
						printf("%s", p);
						if(count1==number1)
								printf("*\n");
						else
								printf("\n");
						count1++;
				}
		}
		else{
				for(i=0; i<number[a]; i++){
						p[location[a]]=line[a][i];
						rec(a+1, p, b);
				}
		}
}
int main()
{
		int count, i, j, k, l, temp;
		char line1[100], *ptr, word[100];
		while(scanf("%s %d", line1, &number1)!=EOF){
				ptr=line1; count=i=0;
				while(*ptr){
						if(*ptr=='['){
								j=0; ptr++;
								while(*ptr!=']'){
										line[i][j]=*ptr;
										j++; ptr++;
								}
								number[i]=j; location[i]=count++; i++;
						}
						else if(*ptr=='*'){
								line[i][0]='a'; line[i][1]='e'; line[i][2]='i';
								line[i][3]='o'; line[i][4]='u'; 
								number[i]=5; location[i]=count++; i++;
						}
						else
								word[count++]=*ptr;
						ptr++;
				}
				word[count]='\0';
				for(j=0; j<i; j++){
						for(k=0; k<number[j]; k++){
								for(l=0; l<number[j]-1; l++)
										if(line[j][l]>line[j][l+1])
												SWAP(line[j][l], line[j][l+1], temp);
						}
				}
				rec(0, word, i);
		}
		return 0;
}
