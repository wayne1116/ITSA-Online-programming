#include<stdio.h>
#include<stdlib.h>
int main()
{
		int bx, by, nnext1, enext1, nnext2, enext2, time, state;
		int x1, x2, y1, y2, n1, n2, e1, e2, f1, f2;
		while(scanf("%d %d", &bx, &by)!=EOF){
				scanf("%d %d %d %d %d", &x1, &y1, &e1, &n1, &f1);
				scanf("%d %d %d %d %d", &x2, &y2, &e2, &n2, &f2);
				time=1; state=0;
				nnext1=n1; enext1=e1; nnext2=n2; enext2=e2;
				if((y1<by && x1<bx) || (y2<by && x2<bx)){
						while(f1>0 || f2>0){
								if(nnext1>0 && f1>0){
										y1=(y1+1)%by;
										nnext1--;
								}
								else if(nnext1==0 && f1>0){
										if(enext1!=0){
												x1=(x1+1)%bx;
												enext1--;
										}
										else{
												nnext1=n1;
												enext1=e1;
												y1=(y1+1)%by;
												nnext1--;
										}
								}
								if(enext2>0 && f2>0){
										x2=(x2+1)%bx;
										enext2--;
								}
								else if(enext2==0 && f2>0){
										if(nnext2!=0){
												y2=(y2+1)%by;
												nnext2--;
										}
										else{
												nnext2=n2;
												enext2=e2;
												x2=(x2+1)%bx;
												enext2--;
										}
								}
								if(x1==x2 && y1==y2){
										printf("robots explode at time %d\n", time);
										state=1;
										break;
								}
								f1--;
								f2--;
								time++;
						}
				}
				if(state==0)
						printf("robots will not explode\n");
		}
		return 0;
}
