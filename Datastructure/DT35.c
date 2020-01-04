    #include<stdio.h>  
    #include<stdlib.h>  
    struct node{  
            int fri;  
            struct node *next;  
    };  
    struct node *insert(struct node *p, int a)  
    {  
            struct node *new, *current;  
            new=(struct node *)malloc(sizeof(struct node));  
            new->fri=a; new->next=NULL;  
            if(p==NULL)  
                    return new;  
            current=p;  
            while(current->next)  
                    current=current->next;  
            current->next=new;  
            return p;  
    }  
    int cmp(const void *x, const void *y)  
    {  
        return *(short *)x-*(short *)y;  
    }  
    int main()  
    {  
            short *flag, result[1024], queue[1024], fri;  
            int a, b, c, i, j, top, front, rear;  
            struct node *lnode[32], *current, *previous;  
            while(scanf("%d%d", &a, &b)!=EOF){  
                    for(i=1; i<=a; i++)  
                            lnode[i]=NULL;  
                    for(i=1; i<=a; i++){  
                            for(j=1; j<=a; j++){  
                                    scanf("%d", &c);  
                                    if(c==1)  
                                            lnode[i]=insert(lnode[i], j);  
                            }  
                    }  
                    flag=(short *)calloc(a+1, sizeof(short));  
                    front=rear=0; flag[b]=1;  
                    current=lnode[b];  
                    while(current){  
                            queue[rear++]=current->fri;  
                            current=current->next;  
                    }  
                    top=0;  
                    while(front!=rear){  
                            fri=queue[front++];  
                            if(!flag[fri]){  
                                    flag[fri]=1;  
                                    result[top++]=fri;  
                                    current=lnode[fri];  
                                    while(current){  
                                            queue[rear++]=current->fri;  
                                            previous=current;  
                                            current=current->next;  
                                            free(previous);  
                                    }  
                            }  
                    }  
                    if(top>0){  
                            printf("Reachable friends for person %d:", b);  
                            qsort(result, top, sizeof(short), cmp);   
                            for(i=0; i<top; i++)  
                                    printf(" %d", result[i]);  
                            printf("\n");  
                    }  
                    else  
                            printf("No reachable friend for person %d.\n", b);  
                    free(flag);  
            }  
            return 0;  
    }  
