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
	    vector <int> z(n);
	    for(int i=0;i<n;i++)
	    cin>>z[i];
	    int res=0;
	    for(int i=0;i<n;i++)
	    {
	        if(z[i]>=x)
	        res++;
	    }
	    cout<<res<<endl;
	}
	return 0;
}
