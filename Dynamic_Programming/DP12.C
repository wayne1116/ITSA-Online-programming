#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
		char line1[256];
		char line2[256];
		int length[256][256];
		int len1=0;
		int len2=0;
		int max=0;
		int i=0, j=0;

		while(scanf("%s%s", line1, line2)!=EOF){
				len1=strlen(line1);
				len2=strlen(line2);
				for(i=0; i<=len1; i++) length[i][0]=0;
				for(j=0; j<=len2; j++) length[0][j]=0;

				for(i=1; i<=len1; i++){
						for(j=1; j<=len2; j++){
								if(line1[i-1]==line2[j-1])
										length[i][j]=length[i-1][j-1]+1;
								else
										length[i][j]=0;
						}
				}
				max=0;
				for(i=1; i<=len1; i++){
						for(j=0; j<=len2; j++){
								if(max<length[i][j])
										max=length[i][j];
						}
				}
				printf("%d\n",max);
		}
		return 0;
}
