#include<iostream>
using namespace std;
int main()
{
	int n=0, x1=0, x2=0, y1=0, y2=0;
	
	while(cin>>n && n){
		for(int i=0; i<n; i++){
			cin >> x1 >> y1 >> x2 >> y2;
			if((x1<0 && x2>0)||(x1>0 && x2<0)){
				if((y1>0 && y2<0)||(y1<0 && y2>0)) cout << "Both" << endl;
				else cout << "Y" <<endl; 
			}
			else{
				if((y1>0 && y2<0)||(y1<0 && y2>0)) cout << "X" << endl;
				else cout << "None" << endl;
			}
		}
	}
	return 0;
}
