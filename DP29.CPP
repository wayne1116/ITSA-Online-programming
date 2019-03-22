#include<stdio.h>
#include<stdlib.h>
int main()
{
	int vector[10000];
	int count=0, temp=0, result=0;
	int num1=0, num2=0, left=0, right=0, middle=0;
	int i=0, flag=0, a=0;
	int start=0, end=0;
	for(i=0; i<100000; i++){
		temp=i;
		num1=temp%10;
		temp/=10;
		num2=temp%10;
		flag=0;
		while(temp>0){
			if(num2==2 && (num1==1 || num1==4 || num1==7)) {flag=1; break;}
			else if(num2==3 && !(num1==3||num1==6||num1==9)) {flag=1; break;}
			else if(num2==4 && (num1<4 && num1!=0)) {flag=1; break;}
			else if(num2==5 && ((num1<5 && num1!=0) || num1==7)) {flag=1; break;}
			else if(num2==6 && !(num1==6 || num1==9)) {flag=1; break;}
			else if(num2==7 && (num1<7 && num1!=0)) {flag=1; break;}
			else if(num2==8 && (num1<8 && num1!=0)) {flag=1; break;}
			else if(num2==9 && num1<9) {flag=1; break;}
			else if(num2==0 && num1>0) {flag=1; break;}
			num1=num2;
			temp/=10;
			num2=temp%10;
		}
		if(!flag) vector[count++]=i;
	}
	scanf("%d", &a);
	for(i=0; i<a; i++){
		scanf("%d%d", &start, &end);
		left=0; right=count-1;
		while(left<=right){
			middle=(left+right)/2;
			if(vector[middle]==start) {left=middle; break;}
			if(vector[middle]>start) right=middle-1;
			else left=middle+1;
		}
		result=left;
		left=0; right=count-1;
		while(left<=right){
			middle=(left+right)/2;
			if(vector[middle]==end){left=middle; break;}
			else if(vector[middle]>end) right=middle-1;
			else left=middle+1;
		}
		if(vector[left]>end) left--;
		printf("%d\n", left-result+1);
	}
	return 0;
}
