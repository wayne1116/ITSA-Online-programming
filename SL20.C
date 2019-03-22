#include<stdio.h>
#include<stdlib.h>
int main()
{
		int year, mon, day, resultyear1, resultyear2, total=0, i;
		int day2=1970/4-1970/100+1970/400, day1;
		while(scanf("%d%d%d", &year, &mon, &day)!=EOF){
				if(year<=1970 || year>=2100){
						printf("invalid\n");
						continue;
				}
				if(!(1<=mon && mon<=12)){
						printf("invalid\n");
						continue;
				}
				if(year%4==0 && (year%100!=0 || year%400==0)){
						if(mon==2 && day>29){
								printf("invalid\n");
								continue;
						}
				}
				else{
						if(mon==2 && day>28){
								printf("invalid\n");
								continue;
						}
				}
				if(mon>=1 && mon<=7 && mon!=2){
						if((mon%2!=0 && day>31)||(mon%2==0 && day>30)){
								printf("invalid\n");
								continue;
						}
				}
				else if(mon>=8 && mon<=12){
						if((mon%2!=0 && day>30)||(mon%2==0 && day>31)){
								printf("invalid\n");
								continue;
						}
				}
				day1=year/4-year/100+year/400;
				resultyear1=(year-1970-day1+day2)*365;
				resultyear2=(day1-day2)*366;
				total=0;
				total+=resultyear1+resultyear2;
				for(i=1; i<=mon-1; i++){
						if(i==2){
								if(year%4==0 && (year%100!=0 || year%400==0))
										total+=29;
								else
										total+=28;
						}
						else if(i>=1 && i<=7 && i!=2){
								if(i%2==0)
										total+=30;
								else
										total+=31;
						}
						else if(i>=8 && i<=12){
								if(i%2==0)
										total+=31;
								else
										total+=30;
						}
				}
				if(year%4==0 && (year%100!=0 || year%400==0)){
						printf("%d\n", total+day-1);
				}
				else
						printf("%d\n", total+day);
		}
		return 0;
}
