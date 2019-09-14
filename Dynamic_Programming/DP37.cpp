#include<iostream>  
#include<algorithm>  
using namespace std;  
bool cmp(int &x, int &y)  
{  
    return y>x;  
}  
int main()  
{  
    char line[1024], *ptr;  
    int arr[32], L[32][32];  
    int k=0, n=0, i=0;  
    while(fgets(line,1024,stdin)!=NULL){  
        ptr=line;  
        arr[0]=atoi(ptr);  
        n=1;  
        while(*ptr){  
            if(*ptr==' '){  
                ptr++;  
                if((*ptr>='0' && *ptr<='9') || *ptr=='-')  
                    arr[n++]=atoi(ptr);  
            }  
            ptr++;  
        }  
        sort(arr,arr+n,cmp);  
        int MaxL=2;  
        for(int j=n-1; j>=0; j--){  
            i=j-1; k=j+1;  
            while(i>=0 && k<=n-1){  
                if(arr[i]+arr[k]<2*arr[j]) k++;  
                else if(arr[i]+arr[k]>2*arr[j]){  
                    L[i][j]=2;  
                    i--;  
                }  
                else{  
                    L[i][j]=L[j][k]+1;  
                    MaxL=max(MaxL,L[i][j]);  
                    i--; k++;  
                }  
            }   
            while(i>=0){  
                L[i][j]=2;  
                i--;  
            }  
        }     
        cout << MaxL << endl;  
    }  
    return 0;  
}  
