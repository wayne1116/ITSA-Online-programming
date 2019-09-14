#include<stdio.h>
#include<stdlib.h>
int main()
{
		double a, result;
		int coef, result1;
		while(scanf("%lf", &a)!=EOF){
				if(a>100){
						printf("Mission Failure\n");
						continue;
				}
				else if(a>70)
						result=395.0/a+19*5/60.0;
				else if(a>66)
						result=395.0/a+18*5/60.0;
				else if(a>60)
						result=395.0/a+9*5/60.0;
				else{
						coef=395/(int)a;
						result=395.0/a+coef*5/60.0;
				}
				result1=result*1000;
				if(result1%10>=5)
						result+=0.001;
				printf("%.2lf\n", result);
		}
		return 0;
}
