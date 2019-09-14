#include<stdio.h>
#include<stdlib.h>
int main()
{
		int heaven[]={65,66,67,68,69,70,71,72,73,74};
		int earth[]={97,98,99,100,101,102,103,104,105,106,107,108};
		long a, start1, start2, diff, count;
		while(scanf("%ld", &a)!=EOF){
				start1=0; start2=4;
				diff=a-53;
				if(diff>=0){
						start1=(start1+diff)%10;
						start2=(start2+diff)%12;
						printf("%c%c\n", heaven[start1], earth[start2]);
				}
				else{
						count=0;
						diff=diff*-1;
						while(count<diff){
								if(start1==0)
										start1=10;
								if(start2==0)
										start2=12;
								start1--; start2--;
								count++;
						}
						printf("%c%c\n", heaven[start1], earth[start2]);
				}
		}
		return 0;
}
