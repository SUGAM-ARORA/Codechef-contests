#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int a[n];
	    int dx=INT_MIN;
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	        if(a[i]>dx)
	        dx=a[i];
	    }
	cout<<dx<<endl;
	}
	return 0;
}
