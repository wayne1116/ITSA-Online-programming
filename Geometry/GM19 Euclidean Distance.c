    #include<stdio.h>    
    #include<stdlib.h>    
    #include<limits.h>  
    #include<math.h>  
    int main()    
    {    
        double max=LLONG_MAX;    
        double number[1001][8];    
        int i, j, k;    
        double result=0;    
        int index1=0, index2=0;    
        int a=0, b=0;    
	    
        while(scanf("%d%d", &a,&b)!=EOF){    
            for(i=0; i<a; i++){    
                for(j=0; j<b; j++){    
                    scanf("%lf", &number[i][j]);    
                }    
            }    
            for(i=0; i<a; i++){    
                for(j=i+1; j<a; j++){    
                    result=0;    
                    for(k=0; k<b; k++)    
                        result+=(number[i][k]-number[j][k])*(number[i][k]-number[j][k]);  
                    if(max>result){    
                        max=result;    
                        index1=i;    
                        index2=j;    
                    }    
                }    
            }   
            for(i=0; i<b-1; i++)    
                printf("%d ", (int)number[index1][i]);    
            printf("%d\n", (int)number[index1][i]);    
      
            for(i=0; i<b-1; i++)    
                printf("%d ", (int)number[index2][i]);    
            printf("%d\n", (int)number[index2][i]);    
        }    
        return 0;    
    }  
