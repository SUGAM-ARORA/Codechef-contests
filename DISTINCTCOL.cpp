#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--)
	{
	    int n;
	    cin>>n;
	    int a[n];
	    int mx=INT_MIN;
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	        if(a[i]>mx)
	        mx=a[i];
	    }
	cout<<mx<<endl;
	}
	return 0;
}
