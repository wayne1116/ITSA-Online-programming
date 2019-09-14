#include<stdio.h>  
#include<stdlib.h> 
#define SWAP(x, y, z) ((z)=(x), (x)=(y), (y)=(z)) 
int main()  
{  
		float x, y, x1, x2, x3, y1, y2, y3, temp, slope;  
		while(scanf("%f %f", &x, &y)!=EOF){  
				if(x<0 || y<0)  
						return 0;  
				scanf("%f %f %f %f %f %f", &x1, &y1, &x2, &y2, &x3, &y3);   
				if((x<x1 && x<x2 && x<x3) ||(x>x1 && x>x2 && x>x3))  
						printf("no\n");  
				else if((y<y1 && y<y2 && y<y3)||(y>y1 && y>y2 && y>y3))  
						printf("no\n");  
				else{ 
						if(x1>x2){  
								SWAP(x1, x2, temp);  
								SWAP(y1, y2, temp);  
						}  
						if(x1>x3){  
								SWAP(x1, x3, temp);  
								SWAP(y1, y3, temp);  
						}  
						if(x2>x3){  
								SWAP(x2, x3, temp);  
								SWAP(y2, y3, temp);  
						}  
						slope=(y2-y1)/(x2-x1);  
						if(x<(y-y1+(slope*x1))/slope)  
								printf("no\n");  
						else{  
								slope=(y3-y1)/(x3-x1);  
								if(x>(y-y1+(slope*x1))/slope)  
										printf("no\n");  
								else{  
										slope=(y2-y3)/(x2-x3);  
										if(x>(y-y2+(slope*x2))/slope)  
												printf("no\n");  
										else  
												printf("yes\n");  
								}  
						}  
				}  
		}  
		return 0;  
}  
