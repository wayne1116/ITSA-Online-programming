#include<stdio.h>  
#include<stdlib.h>  
int main()  
{  
    int i, j, k, a, count1, temp[100];  
    int line[100][100];  
    float count, result, max;  
    while(scanf("%d", &a)!=EOF){  
        if(a==0) break;  
        for(i=0; i<a; i++){  
            for(j=0; j<a; j++){  
                line[i][j]=0;  
            }  
        }  
        for(i=0; i<a-1; i++){  
            for(j=i+1; j<a; j++){  
                scanf("%d", &line[i][j]);  
                line[j][i]=line[i][j];  
            }  
        }  
        max=0;  
        for(i=0; i<a; i++){  
            count=0; count1=0;  
            for(j=0; j<a; j++){  
                if(line[i][j]==1){  
                    count++;  
                    temp[count1++]=j;  
                }  
            }  
            if(count>=2){  
                result=0;  
                for(j=0; j<a; j++){  
                    if(line[i][j]==1){  
                        for(k=0; k<count1; k++){  
                            if(line[j][temp[k]]==1){  
                                result++;  
                            }  
                        }  
                    }  
                }  
                if(max<result/(count*(count-1))) max=result/(count*(count-1));  
            }  
        }  
        printf("%.3f\n", max);  
    }  
    return 0;  
}  
