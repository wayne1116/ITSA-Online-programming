#include<iostream>
using namespace std;
int main()
{
	double result[10000];
	double lower, upper;
	result[0]=result[1]=1;
	
	for(int i=2; i<10000; i++)
		result[i]=result[i-1]+result[i-2];
	cin >> lower >> upper;
	int i;
	for(i=0; i<10000; i++){
		if(result[i]>=lower)
			break;
	}
	
	int count=0;
	for(int j=i; j<10000; j++){
		if(result[j]>upper)
			break;
		else
			count++;
	}
	cout << count << endl;;
}
