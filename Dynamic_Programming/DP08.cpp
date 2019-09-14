#include<iostream>  
#include<cmath>  
#include<algorithm>  
using namespace std;  
int main()  
{  
    int a=0, b=0, c=0;  
    int t[2];  
    int e[2];  
    int g[2];  
    while(cin>>a){  
        if(a==0)  
            break;  
        cin>>t[0]>>t[1];  
        e[0]=abs(t[0]-1000);  
        e[1]=abs(t[1]-1000);  
        for(int i=1; i<a; i++){  
            cin>>g[0]>>g[1];  
            b=min(e[0]+abs(g[0]-t[0]),e[1]+abs(g[0]-t[1]));  
            c=min(e[0]+abs(g[1]-t[0]),e[1]+abs(g[1]-t[1]));  
            e[0]=b;  
            e[1]=c;  
            t[0]=g[0];  
            t[1]=g[1];  
        }  
        cout << min(e[0],e[1]) << endl;  
    }  
    return 0;  
}  
