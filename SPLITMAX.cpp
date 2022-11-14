#include <iostream>
using namespace std;
#define ll long long int

ll N=998244353;
int main() {
	// your code goes here
	ll T;
	cin>>T;
	while(T--)
	{
	    ll M;
	    cin>>M;
	    ll temp;
	    ll sum=0;
	    for(ll i=0;i<M;i++)
	    {
	        cin>>temp;
	        sum+=temp;
	        sum%=N;
	    }
	    ll ans=(sum*(sum-1))%N;
	    cout<<ans<<endl;
	}
	return 0;
}
