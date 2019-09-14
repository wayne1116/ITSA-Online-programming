#include<iostream>  
#include<algorithm>  
#include<cstdlib>  
using namespace std;  
int cmp(const void *x, const void *y)  
{  
    return *(int *)x-*(int *)y;  
}  
int main()  
{  
    int a=0, item=0, stu=0;  
    int itemw[10001], stup[10001];  
      
    cin >> a;  
    for(int i=0; i<a; i++){  
        cin >> item >> stu;  
        for(int j=0; j<item; j++) cin >> itemw[j];  
        for(int j=0; j<stu; j++) cin >> stup[j];  
          
        qsort(itemw, item, sizeof(int), cmp);  
        qsort(stup, stu, sizeof(int), cmp);  
          
        int k=0;  
        int result=0;  
        for(int j=0; j<stu && k<item; j++){  
            if(stup[j]>=itemw[k]) {  
                k++;  
                result+=stup[j];  
            }  
        }  
        if(k<item) cout << -1 << endl;  
        else cout << result << endl;  
    }  
    return 0;  
}  
