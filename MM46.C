#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int i=0, j, k;
    long x[10000], y[10000], max=217483647, result;
    while(scanf("%ld%ld", &x[i], &y[i])!=EOF){
        i++;
    }
    for(j=0; j<i; j++){
        for(k=j+1; k<i; k++){
            result=(x[j]-x[k])*(x[j]-x[k])+(y[j]-y[k])*(y[j]-y[k]);
            if(result<max){
                max=result;
            }
        }
    }
    printf("%.4lf\n", sqrt(max);
    return 0;
}
