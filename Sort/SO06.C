#include<stdio.h>     
#include<stdlib.h>     
#define OUT 0     
#define IN  1     
int main()     
{     
		int a, i, j, k, l;     
		int number1, number2, number3, result, state;     
		int arr1[10001], arr2[10001], arr3[10001];     
		scanf("%d", &a);     
		for(l=0; l<a; l++){     
				scanf("%d", &number1);     
				for(j=0; j<number1; j++)     
						scanf("%d", &arr1[j]);     
				scanf("%d", &number2);     
				for(j=0; j<number2; j++)     
						scanf("%d", &arr2[j]);     
				scanf("%d", &number3);     
				for(j=0; j<number3; j++)     
						scanf("%d", &arr3[j]);     

				i=j=k=0; state=OUT;     
				while(i<number1 && j<number2 && k<number3){     
						if(arr1[i]==arr2[j]){     
								if(arr3[k]==arr1[i]){     
										result=arr1[i];     
										state=IN;     
										break;     
								}     
								else if(arr3[k]<arr1[i])     
										k++;     
								else{     
										i++; j++;     
								}     
						}     
						else if(arr1[i]<arr2[j])     
								i++;     
						else     
								j++;     
				}     
				if(state)     
						printf("%d\n", result);     
				else     
						printf("No answer\n");     
		}       
		return 0;     
}  
