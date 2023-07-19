#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--)
	{
	    int n,x;
	    cin>>n>>x;
	    vector <int> a(n);
	    for(int i=0;i<n;i++)
	    cin>>a[i];
	    int ans=0;
	    for(int i=0;i<n;i++)
	    {
	        if(a[i]>=x)
	        ans++;
	    }
	    cout<<ans<<endl;
	}
	return 0;
}

