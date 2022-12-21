#include <iostream>
using namespace std;
#define ll long long

int main() {
	int T;
	cin>>T;
	while(T--){
	    int n,X;
	    cin>>n>>X;
	    int a[n],b[n];
	    for(int i=0; i<n; i++)
	    cin>>a[i];
	    for(int i=0; i<n; i++)
	    cin>>b[i];
	    ll res=0;
	    for(int i=0; i<n; i++)
	    {
	        if(X<=a[i])
	        res+=b[i];
	    }
	    cout<<res<<endl;
	}
	return 0;
}