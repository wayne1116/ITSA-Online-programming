#include<stdio.h>
#include<stdlib.h>
#define swap(x, y, z) ((z)=(x), (x)=(y), (y)=(z))

struct node{
		int num;
		int score;
};
int main()
{
		int i, j, k, number;
		struct node lnode[3], temp;
		char line[100], word1[100], word2[100], word3[100];

		while(scanf("%s", line)!=EOF){
				number=atoi(line);
				for(i=0; i<3; i++){
						lnode[i].num=i+1;
						lnode[i].score=0;
				}
				for(i=0; i<number; i++){
						scanf("%s%s%s", word1, word2, word3);
						if(strcmp(word1, "correct")==0)
								lnode[0].score+=10;
						else if(strcmp(word1, "wrong")==0)
								lnode[0].score-=10;
						if(strcmp(word2, "correct")==0)
								lnode[1].score+=10;
						else if(strcmp(word2, "wrong")==0)
								lnode[1].score-=10;
						if(strcmp(word3, "correct")==0)
								lnode[2].score+=10;
						else if(strcmp(word3, "wrong")==0)
								lnode[2].score-=10;
				}
				for(j=0; j<3; j++){
						for(k=0; k<2; k++){
								if(lnode[k].score<lnode[k+1].score){
										swap(lnode[k], lnode[k+1], temp);
								}
						}
				}
				printf("(%d,%d)", lnode[0].num, lnode[0].score);
				if(lnode[0].score!=lnode[1].score)
						printf("\n");
				printf("(%d,%d)", lnode[1].num, lnode[1].score);
				if(lnode[1].score!=lnode[2].score)
						printf("\n");
				printf("(%d,%d)\n", lnode[2].num, lnode[2].score);
		}
		return 0;
}
