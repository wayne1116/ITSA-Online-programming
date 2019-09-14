#include<iostream>
using namespace std;
int main()
{
		long long a=0, b=0, result=0;
		long long value[63];
		value[0]=1; value[1]=2;
		for(int i=2; i<63; i++)
				value[i]=value[i-2]+value[i-1];
		cin >> a;
		for(int i=0; i<a; i++){
				cin >> b;
				result=0;
				for(int j=62; j>=0; j--){
						if(b/value[j]!=0){
								result+=b/value[j];
								b%=value[j];
						}
				}
				cout <<result << endl;
		}
		return 0;
}
