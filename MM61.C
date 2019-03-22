#include<stdio.h> 
#include<stdlib.h> 
int main() 
{ 
		long a, b, c, crab, rabit, chicken; 
		while(scanf("%ld %ld %ld", &a, &b, &c)!=EOF){
				if(a<0||b<0||c<0 b%2!=0)
						printf("No solution\n");
				else{
						crab=a-c; 
						rabit=(b-(8*crab))/2-c; 
						chicken=c-rabit; 
						if(crab<0 || rabit<0 || chicken<0) 
								printf("No solution\n"); 
						else
								printf("%ld %ld %ld\n", chicken, rabit, crab); 
				} 
		} 
		return 0; 
}  
