#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int T;
	cin>>T;
	while(T--)
	{
	    string arr;
	    cin>>arr;
	    int n = arr.size();
	    if(arr[0] == arr[n-1])
	    {
	        cout<<n-2<<endl;
	    }
	    else
	    {
	        cout<<2<<endl;
	    }
	}
	return 0;
}
