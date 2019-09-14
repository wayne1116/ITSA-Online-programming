#include<iostream>  
#include<queue>  
using namespace std;  
int main()  
{  
    int a=0;  
    while(cin>>a){  
        for(int i=0; i<a; i++){  
            vector<int> people[1001];  
            vector<int> people1[1001];  
            int number=0;  
            int value[1001];  
            cin >> number >> value[1];  
            int parent=0;  
            people1[1].push_back(0);  
            for(int j=2; j<=number; j++){  
                cin >> parent >> value[j];  
                people[parent].push_back(j);  
                people1[j].push_back(parent);   
            }  
              
            int result[1001][3];  
            int flag[1001];  
            queue<int> pq;  
            for(int j=0; j<=number; j++)  
                flag[j]=0;  
                  
            int temp1=0;  
            for(int j=number; j>0; j--){  
                if(people[j].size()==0){  
                    result[j][0]=value[j];  
                    result[j][1]=0;  
                    result[j][2]=(result[j][0]>result[j][1]?result[j][0]:result[j][1]);  
                    flag[j]=1;  
                    temp1=people1[j][0];  
                    if(flag[temp1]==0)  
                        pq.push(temp1);  
                }  
            }  
            while(pq.size()!=0){  
                int temp=pq.front();  
                pq.pop();  
                if(temp==0)  
                    break;  
                if(flag[temp])  
                    continue;  
                int len1=people[temp].size();  
                int state=0;  
                for(int k=0; k<len1; k++){  
                    temp1=people[temp][k];  
                    if(!flag[temp1]){  
                        state=1;  
                        break;  
                    }  
                }  
                if(state){  
                    pq.push(temp);  
                    continue;  
                }  
                flag[temp]=1;  
                int sum=value[temp];  
                int len=people[temp].size();  
                for(int k=0; k<len; k++){  
                    sum+=result[people[temp][k]][1];  
                }  
                result[temp][0]=sum;  
                sum=0;  
                for(int k=0; k<len; k++){  
                    sum+=result[people[temp][k]][2];  
                }  
                result[temp][1]=sum;  
                result[temp][2]=(result[temp][0]>result[temp][1]?result[temp][0]:result[temp][1]);  
                temp1=people1[temp][0];  
                pq.push(people1[temp][0]);  
            }  
            cout << result[1][2] << endl;  
        }  
    }  
    return 0;  
}  
