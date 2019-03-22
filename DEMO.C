#include<stdio.h>
const short MonthDay[]={0,31,28,31,30,31,30,31,31,30,31,30,31}; 
int YMD_2_JD(int Y, int M, int D){
		int JD,i;
		JD=D;
		for (i=0;i<M;i++) JD+=MonthDay[i];
		if ((((Y%4==0 && Y%100!=0) || Y%400==0)) && (M>2)) JD++; 
		return JD;
}
int YMD_2_WeekDay(int Y, int M, int D){
		int offset,jd,weekD;
		offset = ((Y-1)+(Y-1)/4-(Y-1)/100+(Y-1)/400) % 7 ; 
		jd = YMD_2_JD(Y,M,D);
		weekD = (jd + offset) % 7;
		return  weekD; 
}
char *WeekDayName[]={"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};
int main(){
		int Y,M,D, count, i;
		while(scanf("%d", &count)!=EOF){
				for(i=0; i<count; i++){
						scanf("%d %d %d",&Y,&M,&D);
						if(Y>=2000 && 1<=M && M<=12 && 0<D && D<32){
								if(D>MonthDay[M] && M!=2){
										printf("invalid date\n");
										continue;
								}
								else if(M==2){
										if((Y%4==0 && Y%100!=0)|| Y%400==0){
												if(D>29){
														printf("invalid date\n");
														continue;
												}
										}
										else{
												if(D>28){
														printf("invalid date\n");
														continue;
												}
										}
								}
								printf("%s\n",WeekDayName[YMD_2_WeekDay(Y,M,D)]);
						}
						else
								printf("invalid date\n");
				}
		}
		return 0;
}
