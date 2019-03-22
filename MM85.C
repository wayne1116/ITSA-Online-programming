#include<stdio.h>
#include<stdlib.h>
int main()
{
		int i;
		int number, MIN, MAX, *number1, result;
		float min, max, float1;
		while(scanf("%d %f %f", &number, &min, &max)!=EOF){
				MIN=2147483647; MAX=0;
				number1=(int *)malloc(number*sizeof(int));
				for(i=0; i<number; i++){
						scanf("%d", &number1[i]);
						if(MIN>number1[i])
								MIN=number1[i];
						if(MAX<number1[i])
								MAX=number1[i];
				}
				if(MIN==MAX)
						printf("No rescaling\n");
				else{
						float1=(max-min)/(MAX-MIN);	
						for(i=0; i<number-1; i++){
								result=(number1[i]-MIN)*float1+min;
								printf("%d ", result);
						}
						result=(number1[i]-MIN)*float1+min;
						printf("%d\n", result);
				}
		}
		return 0;
}
