#include<stdio.h>
#include<stdlib.h>
int main()
{
		float h, w, result;
		while(scanf("%f %f", &h, &w)!=EOF){
				result=w*10000/(h*h);
				printf("%.1f ", result);
				if(result<18.5)
						printf("underweight\n");
				else if(result>=18.5 && result<24)
						printf("normal\n");
				else if(result>=24 && result<27)
						printf("overweight\n");
				else if(result>=27 && result<30)
						printf("mild obesity\n");
				else if(result>=30 && result<35)
						printf("moderate obesity\n");
				else
						printf("severe obesity\n");
		}
		return 0;
}
