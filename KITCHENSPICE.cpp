#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--)
	{
	    int N;
	    cin>>N;
	    if(N<4)
	    {
	        cout<<"MILD"<<endl;
	    }
	    else if(N>=4 && N<7)
	    {
	    cout<<"MEDIUM"<<endl;
	    }
	    else
	    cout<<"HOT"<<endl;
	}
	return 0;
}