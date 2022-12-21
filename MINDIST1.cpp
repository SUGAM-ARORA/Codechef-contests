#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int T;
	cin>>T;
	while(T--)
	{
	    int N;
	    cin>>N;
	    string s;
	    cin>>s;
	    stack<char>st;
	    int res=0;
	    for(int i=0; i<N; i++)
	    {
	        if(!st.empty())
	        {
	            if(s[i]=='1' && st.top()=='1')
	            {
	                res=1;
	                break;
	            }
	            else if(s[i]=='0' && st.top()=='0')
	            st.pop();
	            else
	            st.push(s[i]);
	        }
	        else
	        st.push(s[i]);
	    }
	    if(res)
	    cout<<1<<endl;
	    else
	    cout<<2<<endl;
	}
	return 0;
}