#include <iostream>
using namespace std;
#define ll long long
int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--)
	{
	    ll ver,sours,sinks;
	    cin>>ver>>sours>>sinks;
	    ll ans=0;
	    if(sours+sinks<=ver)
	    {
	        ll ext=ver-(sours+sinks);
	        ans+=sours*(ext+sinks);
	        ans+=(ext*sinks);
	        ans+=(ext*(ext-1))/2;
	    }
	    else
	    {
	        ll ext=(sours+sinks)-ver;
	        sours=sours-ext;
	        sinks=sinks-ext;
	        ext=0;
	        ans+=sours*(ext+sinks);
	        ans+=(ext*sinks);
	        ans+=(ext*(ext-1))/2;
	    }
	    cout<<ans<<endl;
	}
	return 0;
}
