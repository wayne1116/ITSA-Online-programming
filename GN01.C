#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define SWAP(x,y,z) ((z)=(x),(x)=(y),(y)=(z))
double process(double a, double b, double c, double d)
{
	return sqrt((a-b)*(a-b)+(c-d)*(c-d));
}
int main()
{
	double x[4], y[4], temp, result;
	int i, j;
	double line1=0, line2=0, line3=0, line4=0;
	while(scanf("%lf%lf%lf%lf%lf%lf%lf%lf", &x[0],&y[0],&x[1],&y[1],&x[2],&y[2],&x[3],&y[3])!=EOF){
		for(i=0; i<3; i++){
			for(j=0; j<3-i; j++){
				if(x[j]>x[j+1]){
					SWAP(x[j],x[j+1],temp);
					SWAP(y[j],y[j+1],temp);
				}
			}
		}
		line1=process(x[3],x[2],y[3],y[2]);
		line2=process(x[3],x[1],y[3],y[1]);
		line3=process(x[0],x[2],y[0],y[2]);
		line4=process(x[0],x[1],y[0],y[1]);
		if(line1==line2 && line3==line1 && line1==line4 && line1>0){
			result=(x[3]-x[2])*(x[3]-x[1])+(y[3]-y[2])*(y[3]-y[1]);
			if(result==0)
				printf("square\n");
			else
				printf("diamond\n");
		}
		else if((line1==line3 || line1==line4) && line1>0){
			result=(x[3]-x[2])*(x[3]-x[1])+(y[3]-y[2])*(y[3]-y[1]);
			if(result==0)
				printf("rectangle\n");
			else
				printf("parallelogram\n");
		}
		else
			printf("invalid\n");
	}
	return 0;
}
