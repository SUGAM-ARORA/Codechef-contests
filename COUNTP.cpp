#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--)
	{
	    int n;
	    cin>>n;
	    int x[n];
	    int count=0;
	    for(int i=0; i<n; i++)
	    {
	        cin>>x[i];
	        if(x[i]%2)
	        count++;
	    }
	    if(count==0 || count%2)
	    cout<<"NO"<<endl;
	    else
	    cout<<"YES"<<endl;
	}
	return 0;
}