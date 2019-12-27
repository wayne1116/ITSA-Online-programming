#include<stdio.h>
#include<stdlib.h>
#define SWAP(x, y, z) ((z)=(x), (x)=(y), (y)=(z))
int main()
{
	int i, j, a, n1, n2, n3, temp, b, s1, s2;
	char result[1024], map[11]={"CELAMGIGOO"};
	
	while(scanf("%d", &a)!=EOF){
		n1=a/100; n2=(a/10)%10; n3=a%10;
		SWAP(n1, n3, temp);
		b=n1*100+n2*10+n3;
		s1=(a-b>0?(a-b):(b-a));
		if(s1>=100){
			n1=s1/100; n2=(s1/10)%10; n3=s1%10;
			SWAP(n1, n3, temp);
			s2=n1*100+n2*10+n3;
		}
		else if(s2>=10){
			n1=s1%10; n2=s1/10;
			s2=n1*10+n2;
		}
		else
			s2=s1;
		s1=(s1+s2)*40;
		i=0;
		while(s1>0){
			result[i++]=map[s1%10];
			s1/=10;
		}
		for(j=i-1; j>0; j--)
			printf("%c", result[j]);
		printf("%c\n", result[0]);
	}
	return 0;
}
