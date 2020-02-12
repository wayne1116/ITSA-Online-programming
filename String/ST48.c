#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define swap(x, y, z) ((z)=(x), (x)=(y), (y)=(z))
int process(char *, int *);
void multi(int *, int *, int, int);
int main()
{
	char line1[1024], line2[1024];
	int *result1, *result2, len1, len2, i, a;
	while(scanf("%d", &a)!=EOF){
		for(i=0; i<a; i++){
			scanf("%s", line1);
			scanf("%s", line2);
			result1=calloc(200, sizeof(int));
			result2=calloc(200, sizeof(int));
			len1=process(line1, result1);
			len2=process(line2, result2);
			multi(result1, result2, len1, len2);
			free(result1);
			free(result2);
		}
	}
	return 0;
}

int process(char *line, int *result)
{
	int count=0, i=1;
	int len=strlen(line);
	char *ptr1, *ptr;
	ptr1=&line[len-1];
	ptr=line;
	while(ptr!=ptr1){
		for(i=1; ptr!=ptr1 && i<10000; i*=10){
			result[count]+=(*ptr1-48)*i;
			ptr1--;
		}
		if(ptr==ptr1)
			break;
		count++;
	}
	if(i==10000){
		i=1;
		count++;
	}
	result[count]+=(*ptr1-48)*i;
	return count+1;
}

void multi(int *a, int *b, int lena, int lenb)
{
	int i, j, k;
	int *temp, temp1;
	int maxlen, minlen, totallen, carry=0;
	int *result=calloc(200, sizeof(int));
	if((a[0]==0 && lena==1)||(b[0]==0 && lenb==1)){
		printf("0\n");
		return ;
	}
	if(lena<lenb){
		swap(a, b, temp);
		swap(lena, lenb, temp1);
	}
	maxlen=lena;
	minlen=lenb;
	carry=0;
	for(i=0; i<minlen; i++){
		for(j=0; j<maxlen; j++){
			result[i+j]+=(*(a+j)**(b+i))+carry;
			if(result[i+j]>=10000){
				carry=result[i+j]/10000;
				result[i+j]%=10000;
			}
			else
				carry=0;
		}
		if(carry!=0){
			result[i+j]+=carry;
			carry=0;
		}
	}
	if(result[i+j]>0)
		totallen=i+j+1;
	else
		totallen=i+j;
	j=totallen-1;
	while(result[j]==0)
		j--;
	printf("%d", result[j]);
	for(k=j-1; k>=0; k--){
		if(result[k]>=1000)
			printf("%d", result[k]);
		else if(result[k]>=100)
			printf("0%d", result[k]);
		else if(result[k]>=10)
			printf("00%d", result[k]);
		else
			printf("000%d", result[k]);
	}
	printf("\n");
	free(result);
}
