#include <iostream>
using namespace std;

void res()
{
    int n,k;
    string s;
    cin>>n>>k>>s;
    if(s[0]=='0')
    {
        k--;
        s[0]='1';
    }
    while(k--) 
    s+='0';
    cout<<s<<endl;
}

int main() 
{
 int T,n; 
 cin>>T;
 while(T--) 
 res();
return 0;
}