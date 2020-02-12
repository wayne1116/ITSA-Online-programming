#include<stdio.h>
#include<stdlib.h>
void pro(int a)
{
		if(a==0)
				printf("零");
		else if(a==1)
				printf("³ü");
		else if(a==2)
				printf("¶L");
		else if(a==3)
				printf("°Ñ");
		else if(a==4)
				printf("¸v");
		else if(a==5)
				printf("¥î");
		else if(a==6)
				printf("³°");
		else if(a==7)
				printf("¬m");
		else if(a==8)
				printf("®Ã");
		else
				printf("¨h");
}
int main()
{
		int a, i, temp, number, result1, result2, result3, result4;
		while(scanf("%d", &a)!=EOF){
				for(i=0; i<a; i++){
						scanf("%d", &number);
						if(number==0){
								printf("¹s\n"); continue;
						}
						if(number>=100000000){
								pro(number/100000000);
								printf("»õ");
						}
						if(number>=10000){
								temp=(number/10000)%10000; result1=result2=result3=result4=-1;
								if(temp>0){
										result4=temp%10; temp/=10;
								}
								if(temp>0){
										result3=temp%10; temp/=10;
								}
								if(temp>0){
										result2=temp%10; temp/=10;
								}
								if(temp>0){
										result1=temp%10; temp/=10;
								}
								if(result1 || result2 || result3 || result4){
										if(result1>0){
												pro(result1); printf("¥a");
										}
										if(result2>0){
												if(result1==0) pro(0);
												pro(result2); printf("¨Õ");
										}
										if(result3>0){
												if(result2==0) pro(0);
												pro(result3); printf("¬B");
										}
										if(result4>0){
												if(result3==0) pro(0);
												pro(result4);
										}
										printf("¸U");
								}
						}
						if(number>=0){
								temp=number%10000; result1=result2=result3=result4=-1;
								if(temp>0){
										result4=temp%10; temp/=10;
								}
								if(temp>0){
										result3=temp%10; temp/=10;
								}
								if(temp>0){
										result2=temp%10; temp/=10;
								}
								if(temp>0){
										result1=temp%10; temp/=10;
								}
								if(result1||result2||result3||result4){
										if(result1>0){
												pro(result1); printf("¥a");
										}
										if(result2>0){
												if(result1==0) pro(0);
												pro(result2); printf("¨Õ");
										}
										if(result3>0){
												if(result2==0) pro(0);
												pro(result3); printf("¬B");
										}
										if(result4>0){
												if(result3==0) pro(0);
												pro(result4);
										}
								}
						}
						printf("\n");
				}
		}
		return 0;
}
