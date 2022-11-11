#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--)
	{
	    double A,X,B,Y;
	    cin>>A>>X>>B>>Y;
	    double C=A/X;
	    double D=B/Y;
	    if(C>D)
	    {
	        cout<<"Alice"<<endl;
	    }
	    else if(C<D)
	    {
	        cout<<"Bob"<<endl;
	        }
	   else
	   {
	       cout<<"Equal"<<endl;
	   }
	   
	}
	return 0;
}
