#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--)
	{
	    int n,a,b,x,y;
	    cin>>n>>a>>b>>x>>y;
	    int p = min(a,n-a+1);
	    int q = min(b,n-b+1);
	    int r = min(x,n-x+1);
	    int s = min(y,n-y+1);
	    cout<<min(abs(x-a)+abs(y-b), min(r,s)+min(p,q))<<endl;
	}
	return 0;
}