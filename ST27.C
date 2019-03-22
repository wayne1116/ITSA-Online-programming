#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
		char name[64][4]={"TTT","TCT","TAT","TGT","TTC","TCC","TAC","TGC","TTA","TCA","TAA","TGA","TTG","TCG","TAG","TGG",
				"CTT","CCT","CAT","CGT","CTC","CCC","CAC","CGC","CTA","CCA","CAA","CGA","CTG","CCG","CAG","CGG",
				"ATT","ACT","AAT","AGT","ATC","ACC","AAC","AGC","ATA","ACA","AAA","AGA","ATG","ACG","AAG","AGG",
				"GTT","GCT","GAT","GGT","GTC","GCC","GAC","GGC","GTA","GCA","GAA","GGA","GTG","GCG","GAG","GGG"};
		char result[]={"FSYCFSYCLS**LS*WLPHRLPHRLPQRLPQRITNSITNSITKRMTKRVADGVADGVAEGVAEG"};
		char line[10000], *ptr, *ptr1, temp;
		int i, j=0;
		scanf("%s", line);
		ptr=line;
		while(*ptr){
				ptr1=ptr; ptr+=3;
				temp=*ptr;
				*ptr='\0';
				for(i=0; i<64; i++){
						if(strncmp(name[i], ptr1, 3)==0){
								if(j>0)
										printf(" %c", result[i]);
								else
										printf("%c", result[i]);
								break;
						}
				}
				*ptr=temp; j++;
		}
		printf("\n");
		return 0;
}
