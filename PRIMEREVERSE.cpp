#include <iostream>
using namespace std;

int main() 
{
	int T;
	cin>>T;
	while(T--)
	{
	    int N;
	    cin>>N;
	    string a,b;
	    cin>>a>>b;
	    int o_a,o_b;
	    o_a=o_b=0;
	    for(int i=0; i<N; i++)
	    {
	        if(a[i]=='1') 
	        o_a++;
	        if(b[i]=='1')
	        o_b++;
	    }
	    if(o_a==o_b)
	    cout<<"YES"<<endl;
	    else
	    cout<<"NO"<<endl;
	}
	return 0;
}