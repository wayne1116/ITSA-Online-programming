    #include<iostream>  
    #include<cstring>  
    #include<string>  
    using namespace std;  
    inline int min(int a, int b, int c)  
    {  
        return a<b?(a<c?a:c):(b<c?b:c);  
    }  
    void edit(char *s1, char *s2)  
    {  
        int len1=strlen(s1);  
        int len2=strlen(s2);  
        int d[len1+1][len2+1];  
        int i, j;  

        for(i=0; i<=len1; i++){  
            d[i][0]=i;  
        }  
        for(j=0; j<=len2; j++){  
            d[0][j]=j;  
        }  
        for(i=1; i<=len1; i++){  
            for(j=1; j<=len2; j++){  
                int cost=s1[i-1]==s2[j-1]?0:1;  
                int deletion=d[i-1][j]+1;  
                int insertion=d[i][j-1]+1;  
                int substitude=d[i-1][j-1]+cost;  
                d[i][j]=min(deletion,insertion,substitude);  
            }  
        }  
        cout << d[len1][len2] << endl;    
    }  
    int main()  
    {  
        char line1[128], line2[128];  
        
        scanf("%s %s", line1, line2);    
        edit(line1, line2);    
        return 0;  
    }  
