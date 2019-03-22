#include<iostream>
#include<queue>
using namespace std;
int main()
{
		int a=0, b=0;
		int time[3000];
		while(cin>>a>>b){
				for(int i=0; i<a; i++)
						cin >> time[i];
				priority_queue<int,vector<int>,greater<int> > pq;
				for(int i=0; i<b; i++)
						pq.push(time[i]);
				for(int i=b; i<a; i++){
						int number=pq.top();
						pq.pop();
						pq.push(number+time[i]);
				}
				for(int i=0; i<b-1; i++)
						pq.pop();
				cout << pq.top() << endl;
		}
		return 0;
}
