#include<stdio.h>
#include<stdlib.h>
double rec(int n, int k, float a, float b, double *r, double total)
{
	if(r[n]!=-1)
	    return r[n];
	else
	    total+=a*rec(n-k, k, a, b, r, total)+b;
	return total;
}
int main()
{
	int n, k, i, j=0;
	double a, b, result[1024], result1=0;
	for(i=0; i<1024; i++){
		result[i]=-1;
        }
	scanf("%d %d %lf %lf", &n, &k, &a, &b);
	while(scanf("%lf", &result[j++])!=EOF);
	result1=rec(n, k, a, b, result, result1);
	printf("%.3lf\n", result1);
	return 0;
}
