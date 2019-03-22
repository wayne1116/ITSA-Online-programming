#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
	int a=0, i=0;
	int count=0;
	int number=0;
	
	while(cin>>a){
		vector<int> v1;
		vector<int>::iterator it;
		v1.push_back(-1);
		cin>>number;
		v1.push_back(number);
		count=1;
		 
		for(i=1; i<a; i++){
			cin>>number;
			it=lower_bound(v1.begin(), v1.end(), number);
			if(*it==v1[1]){
				*it=number;
				count++;
			}
			else if(it==v1.end()){
				v1.push_back(number);
				count++;
			}
			else
				*it=number;
		}
		cout << count << endl;
	}
	return 0;
}
