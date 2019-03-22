#include<stdio.h>
#include<stdlib.h>
int main()
{
		int count=0, i, a, number[1024], result[1024], num, result1, result2;
		while(scanf("%d", &a)!=EOF){
				for(i=0; i<a; i++)
						scanf("%d", &number[i]);

				result[count++]=number[1];
				for(i=1; i<a-1; i++){
						result1=(number[i]>number[i-1]?number[i]-number[i-1]:number[i-1]-number[i]);
						result2=(number[i]>number[i+1]?number[i]-number[i+1]:number[i+1]-number[i]);
						if(result1==result2)
								num=(number[i-1]>number[i+1]?number[i-1]:number[i+1]);
						else if(result1>result2)
								num=number[i+1];
						else
								num=number[i-1];
						result[count++]=num;
				}
				result[count++]=number[i-1];
				for(i=0; i<count-1; i++)
						printf("%d ", result[i]);
				printf("%d\n", result[i]);
				count=0;
		}
		return 0;
}
