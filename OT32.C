#include<stdio.h>
#include<stdlib.h>
int main()
{
		int a, i, j, k, *number, temp;
		char sam, line[10];
		while(fgets(line, 10, stdin)!=NULL){
				a=atoi(line);
				for(i=0; i<a; i++){
						fgets(line, 10, stdin);
						sam=line[0];
						printf("The ASCII Encoded Hexadecimal Value of Character '%c' is ", sam);
						j=0; number=(int *)calloc(10, sizeof(int));
						while(sam>0){
								number[j++]=sam%16;
								sam/=16;
						}
						for(k=j-1; k>0; k--){
								if(number[k]>=10 && number[k]<=15)
										printf("%c", number[k]-10+65);
								else
										printf("%c", number[k]+48);
						}
						if(number[0]>=10 && number[0]<=15)
								printf("%c\n", number[0]-10+65);
						else
								printf("%c\n", number[0]+48);
						if(isdigit(line[0]))
								printf("'%c' is a Numeric/Decimal Digit Character\n", line[0]);
						else if(islower(line[0])){
								printf("'%c' is a Lower Case Character\n", line[0]);
								printf("The Upper Case Version of '%c' is '%c'\n", line[0], toupper(line[0]));
								printf("The Hexadecimal Value of <Control-%c> is ", line[0]);
								temp=line[0]-96; j=0; number[0]=0;
								while(temp>0){
										number[j++]=temp%16;
										temp/=16;
								}
								for(k=j-1; k>=0; k--){
										if(number[k]>=10 && number[k]<=15)
												printf("%c", number[k]-10+65);
										else
												printf("%c", number[k]+48);
								}
								printf("\n");
						}
						else if(isupper(line[0])){
								printf("'%c' is an Upper Case Character\n", line[0]);
								printf("The Lower Case Version of '%c' is '%c'\n", line[0], tolower(line[0]));
								printf("The Hexadecimal Value of <Control-%c> is %d\n", line[0], line[0]-64);
								temp=line[0]-64; j=0; number[0]=0;
								while(temp>0){
										number[j++]=temp%16;
										temp/=16;
								}
								for(k-j-1; k>=0; k--){
										if(number[k]>=10 && number[k]<=15)
												printf("%c", number[k]-10+65);
										else
												printf("%c", number[k]+48);
								}
								printf("\n");
						}
						if(line[0]>='0' && line[0]<='7')
								printf("'%c' is an Octal Digit Character\n", line[0]);
						if((line[0]>='0' && line[0]<='9')||(toupper(line[0])>='A' && toupper(line[0])<='F'))
								printf("'%c' is a valid Hexadecimal Character\n", line[0]);
				}
		}
		return 0;
}
