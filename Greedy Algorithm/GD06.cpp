#include<iostream>  
#include<queue>  
using namespace std;  
int main()  
{  
    //int a=0;  
    //while(cin>>a){  
        int number=0;  
        int mach=0;  
        //for(int i=0; i<a; i++){  
            while(cin >> number >> mach){  
            int time[100000];  
            priority_queue<int,vector<int>,greater<int> > ma;  
            //int temp=0;  
            for(int j=0; j<number; j++){  
                cin >> time[j];  
            }  
            for(int j=0; j<mach; j++){  
                ma.push(time[j]);  
            }  
            for(int k=mach; k<number; k++){  
                int temp=ma.top();  
                ma.pop();  
                ma.push(temp+time[k]);  
            }  
            while(ma.size()>1){  
                ma.pop();  
            }  
            cout << ma.top() << endl;  
        }  
        //}  
    //}  
    return 0;  
}  
