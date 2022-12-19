#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>> T;
	for(int j=0;j<T;j++){
	    int n;
	    long long k;
	    cin>>n>>k;
	    long long sum = (n*(n+1))/2 ;
	    if(k<sum)
	    {
	        cout<<-1<<endl;
	    }
	    else
	    {
	        for(int i=0;i<n-1;i++)
	        {
	            cout<< "1 ";
	        }
	        cout<<(k-sum+1)<<endl;
	    }
	}
	return 0;
}