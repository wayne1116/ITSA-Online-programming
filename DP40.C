#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node{
	char line[128];
};
int cmp(const void *x, const void *y)
{
	return strcmp(((struct node *)x)->line, ((struct node *)y)->line);
} 
struct node lnode[1024];
int main()
{
		char line1[128], line2[128];
		int len1=0, len2=0;
		int i=0, j=0, k=0, l=0;
		int max=0, count=0;
		int length[128][128];
		while(scanf("%s %s", line1, line2)!=EOF){
				len1=strlen(line1);
				len2=strlen(line2);
				for(i=0; i<=len1; i++) length[0][i]=0;
				for(i=0; i<=len2; i++) length[i][0]=0;

				max=1;
				count=0;
				for(i=1; i<=len2; i++){
						for(j=1; j<=len1; j++){
								if(line1[j-1]==line2[i-1]){
										length[i][j]=length[i-1][j-1]+1;
										if(max<length[i][j]){
												max=length[i][j];
												for(k=i-max, l=0; k<i; k++, l++)
														lnode[0].line[l]=line2[k];
												lnode[0].line[l]='\0';
												count=1;
										}
										else if(max==length[i][j] && max>1){
												for(k=i-max, l=0; k<i; k++, l++)
														lnode[count].line[l]=line2[k];
												lnode[count].line[l]='\0';
												count++;
                                        }
								}
								else length[i][j]=0;
						}
				}
				if(max>1){
					qsort(lnode, count, sizeof(struct node),cmp);
					printf("%s\n", lnode[0].line);
					for(i=1; i<count; i++){
						if(strcmp(lnode[i-1].line, lnode[i].line)!=0)
							printf("%s\n", lnode[i].line);
					}
				}
				else printf("No common sequence!\n");
		}
		return 0;
}
