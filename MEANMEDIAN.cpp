#include <iostream>
using namespace std;

int main() {
	int T; 
	cin>>T;
	while(T--)
	{
	    int X,Y;
	    cin>>X>>Y;
	    int A,B,C;
	    A=Y , B=Y;
	    C=3*X - 2*Y;
	    int cnt=0;
	    int mean =(A+B+C)/3;
	    while (mean!= X && cnt<3)
	    {
	        C--;
	        mean=(A+B+C)/3;
	        cnt++ ;
	        
	    }
	    if(mean!=X)	    C+=3;
	    cnt=0;
	    while(mean!=X && cnt<3)
	    {
	        C++;
	        mean=(A+B+C)/3;
	        cnt++ ;
	    }
	    cout<< A<<" "<< B <<" " << C << endl;
	}
	return 0;
}
