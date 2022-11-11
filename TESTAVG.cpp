#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t>0)
	{
	    int a,b,c;
	    cin>>a>>b>>c;
	    if(a+b<70 || b+c<70 || a+c<70)
	    cout<<"FAIL"<<endl;
	    else
	    cout<<"PASS"<<endl;
	    t--;
	}
	return 0;
}
