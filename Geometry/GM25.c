#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define Swap(x,y,z) ((z)=(x), (x)=(y), (y)=(z))
int main()
{
	int a=0;
	int i=0;
	double len1=0,len2=0,len3=0, temp;
	int line1=0,line2=0,line3=0, temp1;
	int x1=0,x2=0,x3=0,y1=0,y2=0,y3=0;
	int result=0;
	
	while(scanf("%d", &a)!=EOF){
		for(i=0; i<a; i++){
			scanf("%d%d%d%d%d%d", &x1,&y1,&x2,&y2,&x3,&y3);
			line1=(x1-x2)*(x1-x2)+(y1-y2)*(y1-y2);
			line2=(x1-x3)*(x1-x3)+(y1-y3)*(y1-y3);
			line3=(x2-x3)*(x2-x3)+(y2-y3)*(y2-y3);
			len1=sqrt(line1);
			len2=sqrt(line2);
			len3=sqrt(line3);
			
			if(len1<len2){
				Swap(len1,len2,temp);
				Swap(line1,line2,temp1);
				if(len1<len3){
					Swap(len1,len3,temp);
					Swap(line1,line3,temp1);
					Swap(len2,len3,temp);
					Swap(line2,line3,temp1);
				}
			} else{
				if(len1<len3){
					Swap(len1,len3,temp);
					Swap(line1,line3,temp1);
					Swap(len2,len3,temp);
					Swap(line2,line3,temp1);
				}
				else if(len2<len3){
					Swap(len2,len3,temp);
					Swap(line2,line3,temp1);
				}
			}
			if(len2+len3>len1){
				result=0;
				if(len1==len2 || len1==len3 || len2==len3)
					result+=1;
				if(len1==len2==len3)
					result+=2;
				if(line2+line3-line1==0)
					result+=4;
				else if(line2+line3-line1<0)
					result+=8;
				else
					result+=16;
				printf("%d\n", result);
			} else
				printf("0\n");
		}
	}
	return 0;
}
