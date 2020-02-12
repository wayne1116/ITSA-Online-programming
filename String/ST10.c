#include<stdio.h>   
#include<stdlib.h>   
int main()   
{   
    	int number[20];   
    	int a, i, j, k, total, one, result[20], lower, upper, temp, count;   
    	number[0]=1;   
    	for(i=1; i<20; i++){   
        	number[i]=number[i-1]*2;   
    	}   
    	scanf("%d", &a);   
        for(i=0; i<a; i++){   
            	scanf("%d%d", &total, &one);   
            	lower=0;   
            	for(j=0; j<one; j++){   
                	lower+=number[j];   
            	}   
            	upper=0;   
            	for(j=total-1; j>=total-one; j--){   
                	upper+=number[j];   
            	}   
            	for(j=lower; j<=upper; j++){   
                	temp=j; count=0;   
                	for(k=0; k<20; k++){   
                    		result[k]=0;   
                	}   
                	k=0;   
                	while(temp>0){   
                    		if(count>one){   
                        		break;   
                    		}   
                    		if(temp%2){   
                        		count++;   
                    		}   
                    		result[k++]=temp%2;   
                    		temp/=2;   
                	}   
                	if(count==one){   
                    		for(k=total-1; k>=0; k--){   
                        		printf("%d", result[k]);   
                    		}   
                    		printf("\n");   
                	}   
            	} 
            	if(i<a-1){ 
              		printf("\n"); 
          	}   
        }   
    	return 0;   
}  
