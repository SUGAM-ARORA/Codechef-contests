#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--)
	{
	    int X,Y,K;
	    cin>>X>>Y>>K;
	    int diff = abs(X-Y);
	    int res = (diff%K)?(diff/K+1):diff/K;
	    cout<<res<<endl;
	}
	return 0;
}
