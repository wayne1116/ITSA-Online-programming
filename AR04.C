#include<stdio.h>
#include<stdlib.h>
int main()
{
		int a, i, j, k, l, start, start1, start2, m;
		char result[100][1024];
		while(scanf("%d", &a)!=EOF){
				start=0;
				for(i=0; i<a; i++){
						for(j=0; j<1024; j++){
								result[i][j]='\0';
						}
				}
				for(i=0; i<a-1; i++){
						for(j=0; j<(a-1-i)*2; j++)
								result[i][j+start]=' ';
						result[i][j+start]='x';
						start1=i+1;
						for(j=0; j<a-1-i; j++){
								for(k=0; k<(a-2-j-i)*2; k++)
										result[start1][k+start]=' ';
								for(l=0, m=0; l<(j+1)*2; l++, m+=2){
										result[start1][k+m+start]='x';
										result[start1][k+m+1+start]=' ';
								}
								result[start1][k+m+start]='x';
								m=k+m+1+start;
								for(k=0; k<(a-2-j-i)*2+1; k++)
										result[start1][k+m]=' ';
								if(j==0)
										start2=k+m;
								start1++;
						}
						start=start2;
				}
				result[i][start]='x';
				for(i=0; i<a-1; i++)
						printf("%s\n\n", result[i]);
				printf("%s\n", result[i]);
		}
		return 0;
}
