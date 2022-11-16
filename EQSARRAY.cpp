#include <iostream>
using namespace std;
#define ll long long int

int main() {
    // your code goes here
	ll T;
	cin>>T;
	while(T--){
	    ll n, x;
	    cin>>n>>x;
	    ll y[n];
	    for(ll i=0; i<n; i++)
	    cin>>y[i];
	    if(n==1)
	    {
	        if(y[0]==x)
	        {
	        cout<<"YES\n";
	        }
	        else
	        {
	        cout<<"NO\n";
	        }
	        continue;
	    }
	    int temp=1;
	   for(int i=0; i<n-1; i++)
	   if(y[i]==x)
	   {
	       temp=0;
	       break;
	   }
	    if(!temp)
	    {
	    cout<<"YES\n"<<endl;
	    }
	    else
	    {
	        cout<<"NO\n"<<endl;
	    }
	}
	return 0;
}