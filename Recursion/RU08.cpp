#include<iostream>    
#include<cstring>    
using namespace std;     
int n1, n2;    
char s1[64], s2[64];    
int length[64][64];    
int prev[64][64];     
char lcs[64];    
void print_LCS(int i, int j)  
{  
    int l = length[i][j];           // LCS長度  
    while (l >0){  
        if(i==0 || j==0) break;  
        if (prev[i][j] == 0){        // 左上方   
            l--; lcs[l] = s1[i-1]; i--; j--;  
        }  
        else if (prev[i][j] == 1)   // 左方  
            j--;  
        else if (prev[i][j] == 2)   // 上方  
            i--;  
    }  
    l = length[n1][n2];  
    for (int i=0; i<l; i++)  
        cout << lcs[i];  
}  
void LCS()    
{    
    for (int i=0; i<=n1; i++) length[i][0] = 0;    
    for (int j=0; j<=n2; j++) length[0][j] = 0;    
     
    for (int i=1; i<=n1; i++)    
        for (int j=1; j<=n2; j++)    
            if (s1[i-1] == s2[j-1])    
            {    
                length[i][j] = length[i-1][j-1] + 1;    
                prev[i][j] = 0; // 左上方    
            }    
            else    
            {    
                if (length[i-1][j] < length[i][j-1])    
                {    
                    length[i][j] = length[i][j-1];    
                    prev[i][j] = 1; // 左方    
                }    
                else    
                {    
                    length[i][j] = length[i-1][j];    
                    prev[i][j] = 2; // 上方    
                }    
            }  
    print_LCS(n1, n2);    
}    
     
int main()    
{    
    cin >> s1 >> s2;    
    n1=strlen(s1); n2=strlen(s2);    
    LCS();    
    cout << endl;    
    return 0;    
}  
