#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a;
    int min;
    int max;
    scanf("%d", &a);
    min=a;
    max=a;

    while(scanf("%d", &a)!=EOF){
        min=a>min?min:a;
        max=a>max?a:max;
    }
    printf("Largest number = %d\nSmallest number = %d\n", max, min);
    return 0;
}
