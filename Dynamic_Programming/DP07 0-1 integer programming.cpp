#include<iostream>  
#include<set>  
#include<algorithm>  
using namespace std;  
int main()  
{  
        set<int> s, s1;  
        set<int>::iterator q, p;  
        int a=0;  
        int i=0;    
        int number[128];  
        while(cin>>a){  
                if(a==0)  
                        break;  
                for(i=0; i<a; i++)  
                        cin>>number[i];  
                sort(number, number+a);  
                s.insert(0);  
                for(i=0; i<a; i++){  
                        q=s.begin();  
                        p=s.end();  
                        while(p!=q){
				s1.insert(*q+number[i]);    
                            	q++;  
                        }  
                        q=s1.begin();
                        p=s1.end();
                        while(p!=q){
                        	if(s.count(*q)==0)
                        		s.insert(*q);
                        	q++;
			}
			s1.clear();
                }  
                cout << s.size() << endl;  
                s.clear();  
        }  
        return 0;  
}  
