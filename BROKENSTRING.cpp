#include <bits/stdc++.h>
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
       string stg1, stg2;
       for(int i=0;i<n/2;i++)
       stg1+=s[i];
       for(int i=n/2;i<n;i++)
       stg2+=s[i];
       if(stg1==stg2)
       cout<<"YES"<<endl;
       else
       cout<<"NO"<<endl;
       }
	return 0;
}

