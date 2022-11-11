#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--)
	{
	    float A,B,C;
	    float x=0;
	    cin>>A>>B>>C;
	    x=(A+B)/2;
	    if(x>C)
	    {
	        cout<<"Yes"<<endl;
	    }
	    else 
	    cout<<"No"<<endl;
	}
		
}
