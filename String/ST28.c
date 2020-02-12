#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    	int evidence;
    	int len;
    	int witness;
    	int count;
    	char seq[128][128];
    	char sample[128];
    	int i, j, k;

    	scanf("%d", &evidence);
    	scanf("%d", &len);
    	for(i=0; i<evidence; i++) {
        	scanf("%s", seq[i]);
    	}

    	scanf("%d", &witness);
    	for(i=1; i<=witness; i++) {
        	memset(sample, '\0', sizeof(sample));
        	scanf("%s", sample);
       		for(j=0; j<evidence; j++) {
            		count=0;
            		for(k=0; k<len; k++) {
                		if(seq[j][k]==sample[k])
                    			++count;
            		}
            		printf("Suspect witness%d with evidence%d similarity %d%%\n", i, j+1, count*100/len);
        	}
    	}
    	return 0;
}
