#include<stdio.h>
#include<stdlib.h>
#define MAX 1024
int main()
{
		int i, j, k, l, a, sum, RESULT, result[MAX], temp;
		char number[10], line[10], input[MAX], coding[MAX], *ptr, *ptr1, *ptr2;
		short *result1, *result2;

		while(fgets(number, 10, stdin)!=NULL){
				for(i=0; i<atoi(number); i++){
						fgets(line, 10, stdin);
						fgets(input, MAX, stdin);
						fgets(coding, MAX, stdin);
						ptr=line;
						if(*ptr=='e'){
								ptr1=input; ptr2=coding; l=0;
								while(*ptr1){
										if(*ptr1=='\n')
												break;
										if(*ptr2=='\n' || *ptr2=='\0')
												ptr2=coding;
										temp=*ptr1; result1=(short *)calloc(10, sizeof(short)); j=0;
										while(temp>0){
												result1[j++]=temp%2;
												temp/=2;
										}
										temp=*ptr2; result2=(short *)calloc(10, sizeof(short)); j=0;
										while(temp>0){
												result2[j++]=temp%2;
												temp/=2;
										}
										sum=0;
										for(j=0; j<10; j++){
												if(result1[j]!=result2[j]){
														RESULT=1;
														for(k=0; k<j; k++)
																RESULT*=2;
														sum+=RESULT;
												}
										}
										if(l==0)
												printf("%d", sum);
										else
												printf(" %d", sum);
										ptr1++; ptr2++; l++; free(result1); free(result2);
								}
								printf("\n");
						}
						else{
								ptr1=input; j=1;
								result[0]=atoi(ptr1);
								while(*ptr1){
										if(*ptr1==' '){
												ptr1++;
												result[j++]=atoi(ptr1);
										}
										ptr1++;
								}
								for(k=0, ptr2=coding; k<j; k++, ptr2++){
										if(*ptr2=='\n' || *ptr2=='\0')
												ptr2=coding;
										temp=result[k]; result1=(short *)calloc(10, sizeof(short)); l=0;
										while(temp>0){
												result1[l++]=temp%2;
												temp/=2;
										}
										temp=*ptr2; result2=(short *)calloc(10, sizeof(short)); l=0;
										while(temp>0){
												result2[l++]=temp%2;
												temp/=2;
										}
										sum=0;
										for(l=0; l<10; l++){
												if(result1[l]!=result2[l]){
														RESULT=1;
														for(a=0; a<l; a++)
																RESULT*=2;
														sum+=RESULT;

												}
										}
										printf("%c", sum); free(result1); free(result2);
								}
								printf("\n");
						}
				}
		}
		return 0;
}
