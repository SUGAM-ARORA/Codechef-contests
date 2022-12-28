#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int T;
	cin>>T;
	while(T--)
	{
	    int n;
	    cin>>n;
	    int a[n];
	    map<int, int>mp;
	    for(int i=0; i<n; i++)
	    {
	        cin>>a[i];
	        mp[a[i]]++;
	    }
	    int temp=1;
	    for(auto it:mp)
	    {
	        if(it.second%2!=0)
	        {
	            cout<<"NO"<<endl;
	            temp=0;
	            break;
	        }
	    }
	    if(temp)
	    cout<<"YES"<<endl;
	}
	return 0;
}
