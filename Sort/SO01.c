#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a, i, j, k, player, run, ncount, ycount, count, count1, result[1000];
	char line1[8], data[1000][502];
	
	while(scanf("%d", &a)!=EOF){
		for(i=0; i<a; i++){
			scanf("%d %d", &player, &run);
			for(j=0; j<player; j++){
				for(k=0; k<run; k++){
					scanf("%s", line1);
					data[j][k]=line1[0];
				}
			}
			ncount=0; ycount=0;
			for(j=0; j<player; j++){
				if(data[j][0]=='N')
					ncount++;
				else
					ycount++;
			}
			count=0;
			if(ncount<ycount && ncount!=0){
				for(j=0; j<player; j++){
					if(data[j][0]=='N')
						result[count++]=j;
				}
			}
			else if(ycount<ncount && ycount!=0){
				for(j=0; j<player; j++){
					if(data[j][0]=='Y')
						result[count++]=j;
				}
			}
			else{
				for(j=0; j<player; j++)
					result[count++]=j;
			}

			if(count==1)
				printf("%d\n", result[0]+1);
			else{
				for(k=1; k<run; k++){
					ncount=0; ycount=0; count1=0;
					for(j=0; j<count; j++){
						if(data[result[j]][k]=='N')
							ncount++;
						else
							ycount++;
					}
					if(ncount<ycount && ncount!=0){
						for(j=0; j<count; j++){
							if(data[result[j]][k]=='N')
								result[count1++]=result[j];
						}
						count=count1;
					}
					else if(ycount<ncount && ycount!=0){
						for(j=0; j<count; j++){
							if(data[result[j]][k]=='Y')
								result[count1++]=result[j];
						}
						count=count1;
					}
				}
				for(j=0; j<count-1; j++)
					printf("%d ", result[j]+1);
				printf("%d\n", result[j]+1);
			}
		}
	}
	return 0;
}
