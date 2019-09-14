#include<iostream>
#include<vector>
#include<queue>
using namespace std;
int floor[90001];
int p[90001];
vector<int> c[90001];
int main()
{
	int n=0, num=0, num1=0, size=0;
	
	cin >> n;
	p[0]=0;
	for(int i=1; i<n; i++) {
		cin >> num;
		p[i]=num;
		c[num].push_back(i);
	}	
	 
	queue<int> q;
	bool flag[90001];
	for(int i=0; i<n; i++){
		flag[i]=false;
		if(c[i].size()==0){
			q.push(i);
			flag[i]=true;
		}
		floor[i]=1;
	}
	int k=0, child=0;
	while(q.size()>0){
		num1=q.front();
		q.pop();
		size=c[num1].size();
		int total=1;
		for(k=0; k<size; k++){
			child=c[num1][k];
			if(flag[child]) total+=floor[child];
			else break; 
		}
		if(k<size) q.push(num1);
		else{
			floor[num1]=total;
			flag[num1]=true;
			if(num1==0)break;
			q.push(p[num1]);
		} 
	}
	int result=n/2;
	int i=0, j=0;
	for(i=0; i<n; i++){
		if(result>=floor[0]-floor[i]){
			size=c[i].size();
			for(j=0; j<size; j++){
				if(result<floor[c[i][j]]) break;
			}
			if(j==size)break;
		}
	}
	cout << i << endl;
	return 0;
} 
