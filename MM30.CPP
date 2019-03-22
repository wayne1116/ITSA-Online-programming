#include<iostream>
using namespace std;
int main()
{
		long long a=0, b=0, result=0, i=0;
		while((cin>>a>>b)){
				if(a==0 && b==0)
						break;
				result=1;
				for(i=0; i<b; i++)
						result*=a;
				cout << result%10 << endl;
		}
		return 0;
}

