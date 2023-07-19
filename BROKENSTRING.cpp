#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	scanf("%d",&T);
	while(T--)
   {
       int n;
       cin>>n;
       string s;
       cin>>s;
       string strg1, strg2;
       for(int i=0;i<n/2;i++)
       strg1+=s[i];
       for(int i=n/2;i<n;i++)
       strg2+=s[i];
       if(strg1==strg2)
       cout<<"YES"<<endl;
       else
       cout<<"NO"<<endl;
       }
	return 0;
}
