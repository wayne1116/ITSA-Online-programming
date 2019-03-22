#include<stdio.h>
#define min(x, y) (x>y?y:x)
int rec(int a, int count)
{
		if(a==1)
				return count;
		else{
				count++;
				if(a%2==0)
						count=rec(a/2, count);
				else
						count=min(rec(a+1, count), rec(a-1, count));
		}
		return count;
}						
int main()
{
		int i, a, count;
		while(scanf("%d", &a)!=EOF){
				count=0;
				count=rec(a, count);
				printf("%d\n", count);
		}
		return 0;
}
