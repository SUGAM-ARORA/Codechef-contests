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
	    int xy=INT_MAX;
	    for (int i=0;i<n;i++)
	    {
	        cin>>a[i];
	        if(xy>a[i])
	        xy=a[i];
	    }
	    int ans=0;
	    int temp=0;
	    for(int i=0;i<n;i++)
	    {
	        if(a[i]!=xy)
	        {
	          if(a[i]%xy==0)
	          ans++;
	          else
	          {
	              temp=1;
	              break;
	          }
	        }
	    }
	if (temp)
	cout<<n<<endl;
	else
	cout<<ans<<endl;
	}
	return 0;
}
