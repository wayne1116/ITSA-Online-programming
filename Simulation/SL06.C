#include<stdio.h>
#include<stdlib.h>
#define OUT 0
#define IN  1
void function(int start, int day, int mon);
int main()
{
		int year, mon, day, i, j, count=1, state=OUT;
		while(scanf("%d%d%d", &year, &mon, &day)!=EOF){
				if(mon>12 || mon<1){
						printf("invalid\n");
						continue;
				}
				if(!(0<=day && day<=6)){
						printf("invalid\n");
						continue;
				}
				printf(" Su Mo Tu We Th Fr Sa\n");
				printf("=====================\n");
				for(i=0; i<3*day; i++)
						printf(" ");
				count=1;
				for(i=day; i<7; i++){
						printf("%3d", count);
						count++;
				}
				printf("\n");
				while(count<29){
						for(i=0; i<7; i++){
								if(count>=29){
										state=IN;
										break;
								}
								printf("%3d", count);
								count++;
						}
						if(state==IN)
								break;
						printf("\n");
				}
				if(mon==2){
						if(year%4==0 && (year%100!=0 || year%400==0))
								printf(" 29\n");
						else{
								if(state==IN)
										printf("\n");
						}
				}
				else if(1<=mon && mon<=7 && mon!=2){
						if(mon%2!=0){
								function(i, count, 31);
						}
						else{
								function(i, count, 30);
						}
				}
				else if(8<=mon && mon<=12){
						if(mon%2!=0){
								function(i, count, 30);
						}
						else{
								function(i, count, 31);
						}
				}
				printf("=====================\n");
				state=OUT;
		}
		return 0;
}
void function(int start, int day, int mon)
{
		int j;
		if(start==7)
				start=0;
		while(day<=mon){
				for(j=start; j<7; j++){
						if(day>mon){
								printf("\n");
								return ;
						}
						printf("%3d", day);
						day++;
				}
				printf("\n");
				start=0;
		}
}


