#include<stdio.h>
#include<stdlib.h>
int number[12], result, num, result1, total;
void rec(int a, int b)
{
		int i, j;
		if(num==b-1){
				total=1;
				number[b-1]+=a;
				for(i=0; i<b; i++){
						for(j=1; j<=number[i]; j++)
								total*=j;
				}
				result+=(result1/total);
				number[b-1]-=a;
		}
		else{
				for(i=0; i<=a; i++){
						number[num]+=i; num++;
						rec(a-i, b);
						num--; number[num]-=i;
				}
		}
}
int main()
{
		char line[1024], *ptr;
		int i, j, book, box, result2;
		while(scanf("%s", line)!=EOF){
				ptr=line;
				book=atoi(ptr);
				while(*ptr){
						if(*ptr==','){
								ptr++;
								box=atoi(ptr);
								break;
						}
						ptr++;
				}
				if(box==1)
						printf("1\n");
				else{
						result1=1;
						for(i=1; i<=book; i++)
								result1*=i;
						if(book==box)
								printf("%d\n", result1);
						else{
								for(i=0; i<book; i++)
										number[i]=1;
								result2=book-box; num=result=0;
								rec(result2, box);
								printf("%d\n", result);
						}
				}
		}
		return 0;
}
