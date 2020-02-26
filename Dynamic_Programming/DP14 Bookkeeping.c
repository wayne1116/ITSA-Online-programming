#include<stdio.h>  
#include<stdlib.h>  
#include<string.h>  
struct node{  
    char name[1024];  
    int money;  
};  
int main()  
{  
    struct node result[128];  
    int a, i, j, borrow, recieve, people;  
    char name[1024];  
    scanf("%d", &a);  
    for(i=0; i<a; i++){  
        scanf("%s", result[i].name);  
        result[i].money=0;  
    }  
    while(scanf("%s", name)!=EOF){  
        scanf("%d", &borrow);  
        scanf("%d", &people);  
        recieve=borrow/people;  
        for(i=0; i<a; i++){  
            if(strcmp(result[i].name, name)==0){  
                result[i].money-=borrow;  
                break;  
            }  
        }  
        for(i=0; i<people; i++){  
            scanf("%s", name);  
            for(j=0; j<a; j++){  
                if(strcmp(result[j].name, name)==0){  
                    result[j].money+=recieve;  
                }  
            }  
        }  
    }     
    for(i=0; i<a; i++){  
        printf("%s %d\n", result[i].name, result[i].money);  
    }  
    return 0;  
}  
