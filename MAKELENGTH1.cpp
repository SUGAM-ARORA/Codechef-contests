#include <bits/stdc++.h>
using namespace std;

int main() {
    // your code goes here
	int T;
	cin>>T;
	while(T--)
	{
	    int n,i;
	    cin>>n;
	    string str;
	    cin>>str;
	    stack<char>s;
	    s.push(str[0]);
	    for(i=1; i<n; i++)
	    {
	        if(s.top()==str[i])
	        {
	            s.pop();
	            s.push('0');
	        }
	        else
	        s.push(str[i]);
	    }
	    if(s.size()==1)
	    cout<<"YES"<<endl;
	    else
	    {
	        char ch = s.top();
	        s.pop();
	        while(!s.empty() && s.top()==ch)
	        s.pop();
	        if(s.empty())
	        cout<<"YES"<<endl;
	        else
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}