#include<iostream>
using namespace std;
int flag[200], len[200][200];
bool dfs(int start, int n)
{
	for(int i=0; i<n; i++){
		if(len[start][i]==1){
			if(flag[start]==flag[i]) return false;
			else if(flag[i]==0){
				flag[i]=-flag[start];
				if(!dfs(i, n)) return false;
			}
		}
	}
	return true;
}
int main()
{
	int n=0, node1=0, node2=0, edge=0;
	bool result=false;
	
	while(cin >> n && n){
		cin >> edge;
		for(int i=0; i<n; i++)
			for(int j=0; j<n; j++) len[i][j]=0;
			
		for(int i=0; i<n; i++) flag[i]=0;
		for(int i=0; i<edge; i++){
			cin >> node1 >> node2;
			len[node1][node2]=1;
			len[node2][node1]=1;
		}
		
		result=true;
		for(int i=0; i<n; i++){
			if(flag[i]==0){
				flag[i]=1;
				if(!dfs(i, n)){
					result=false;
					break;
				}
			}
		}
		if(result) cout << "BICOLORABLE." << endl;
		else cout << "NOT BICOLORABLE." << endl; 
	} 
	return 0;
}
