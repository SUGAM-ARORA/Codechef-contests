#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--)
	{
	    int N;
	    cin>>N;
	    string s;
	    cin>>s;
	    int op=0;
	    for(int i=s.length()-2 ; i>=0 ; i--)
	    if(s[i]==s[i+1])
	    op++;
	    cout<<op<<endl;
	}
	  return 0;
}