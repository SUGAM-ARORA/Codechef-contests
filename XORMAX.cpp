#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--){
	    string A,B;
	    cin>>A>>B;
	    int zero, one;
	    zero=one=0;
	    for(int i=0; i<A.length(); i++){
	        if(A[i]=='0')
	        zero++;
	        else
	        one++;
	        if(B[i]=='0')
	        zero++;
	        else
	        one++;
	    }
	    int temp=min(zero, one);
	    string ans="";
	    for(int i=0; i<temp; i++)
	    ans+='1';
	    for(int i=temp; i<A.length(); i++)
	    ans+='0';
	    cout<<ans<<endl;
	}
	return 0;
}
