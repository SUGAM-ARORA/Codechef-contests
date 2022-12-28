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
	    int a[n], b[n];
	    for(int i=0; i<n; i++)
	    {
	        cin>>a[i];
	    }
	    for(int i=0; i<n; i++)
	    {
	        cin>>b[i];
	    }
	    int res,ans;
	    res=ans=0;
	    for(int i=0; i<n; i++)
	    {
	        if(a[i]!=0 && b[i]!=0)
	        res++;
	        else
	        {
	            ans=max(ans,res);
	            res=0;
	        }
	    }
	    ans=max(ans,res);
	    cout<<ans<<endl;
	}
	return 0;
}
