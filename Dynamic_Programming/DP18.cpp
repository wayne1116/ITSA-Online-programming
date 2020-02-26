#include<iostream>  
#include<cstring>  
using namespace std;  
int main()  
{  
    int len1=0, len2=0;  
    char s1[64], s2[1024];  
    int length[64][1024];  
    while(cin>>s1>>s2){  
        len1=strlen(s1);  
        len2=strlen(s2);  
        for(int i=0; i<=len1; i++) length[i][0]=0;  
        for(int i=0; i<=len2; i++) length[0][i]=1;  
          
        for(int i=1; i<=len1; i++){  
            for(int j=1; j<=len2; j++){  
                length[i][j]=length[i][j-1]+(s1[i-1]==s2[j-1]?length[i-1][j-1]:0);  
            }  
        }  
        cout << length[len1][len2] << endl;  
    }  
    return 0;  
}  
