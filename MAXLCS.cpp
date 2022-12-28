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
	    string a; 
	    cin>>a;
	    string b=a;
	    reverse(a.begin(), a.end());
	  vector<vector<int>>arr(n+1, vector<int>(n+1, 0));
	    for(int i=1; i<=n; i++)
	    {
	        for(int j=1; j<=n; j++)
	        {
	            if(a[j-1]!=b[i-1])
	            arr[i][j]=max(arr[i][j-1], arr[i-1][j]);
	            else
	            arr[i][j]=arr[i-1][j-1]+1;
	        }
	    }
	    int res = arr[n][n]/2;
	    cout<<res<<endl;
	}
	return 0;
}
