#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	std::cin>>T;
	while(T--)
	{
	    int N;
	    std::cin>>N;
	    if(N<=25)
	    std::cout<<1<<std::endl;
	    else
	    std::cout<<((N-1)/25)+1 <<std::endl;
	}
	return 0;
}
