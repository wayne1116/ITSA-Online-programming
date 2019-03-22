#include<stdio.h>
#include<stdlib.h>
#include<math.h>
double f(double a)
{
		return a*a+(4*sin(a))+7;
}
int main()
{
		int count, i;
		double x, dx, result1, result2;
		while(scanf("%d%lf%lf", &count, &x, &dx)!=EOF){
				for(i=0; i<count; i++){
						result1=(f(x+dx)-f(x))/dx;
						result2=(f(x+dx)-f(x-dx))/(2*dx);
						printf("%lf %lf %lf\n", dx, result1, result2);
						dx/=2;
				}
		}
		return 0;
}
