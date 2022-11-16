#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	    int n;
	    cin>>n;
	    int x[2*n];
	    for(int i=0; i<2*n; i++)
	    cin>>x[i];
	    map<int, int>mx;
	    for(int i=0; i<2*n; i++)
	    mx[x[i]]++;
	    int flag=0;
	    for(auto ys:mx){
	        if(ys.second>=3){
	            flag=1;
	            break;
	        }
	    }
	    if(flag)
	    {
	        cout<<"NO"<<endl;
	    }
	    else
	    {
	        cout<<"YES"<<endl;
	    }
	}
	return 0;
}
