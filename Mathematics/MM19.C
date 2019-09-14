#include<stdio.h>
#include<stdlib.h>
int factor(int x, int y)
{
		if(y==0)
				return x;
		return factor(y, x%y);
}
int main()
{
		int height, width, depth, number, com, i;
		float surface, volumn, min, results, resultv, ratio;
		while(scanf("%d", &number)!=EOF){
				min=2147483647;
				for(i=0; i<number; i++){
						scanf("%d %d %d", &height, &width, &depth);
						surface=0;
						surface+=height*width; surface+=height*depth;
						surface+=width*depth; surface*=2;

						volumn=height*width*depth;
						ratio=surface/volumn;
						if(min>ratio){
								min=ratio;
								results=surface;
								resultv=volumn;
						}
				}
				com=factor((int)results, (int)resultv);
				printf("%d/%d\n", (int)results/com, (int)resultv/com);
		}
		return 0;
}
