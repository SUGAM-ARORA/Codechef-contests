#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int T;
	cin>>T;
	while(T--){
	    int N,M,K,X;
	    cin>>N>>M>>K>>X;
	    int temp = (N*K)+M;
	    int Z = N*(K-1);
	    int res = X%temp;
	    if(res!=0 && (res-Z)<=0)
	    {
	        cout<<"NO"<<endl;
	    }
        else 
        cout<<"YES"<<endl;
	}
	return 0;
}
