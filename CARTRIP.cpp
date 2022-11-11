#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--)
	{
	    int N;
	    cin>>N;
	    if(N<=300)
	    {
	        cout<<3000<<endl;
	    }
	    else cout<<N*10<<endl;
	}
	return 0;	
}
