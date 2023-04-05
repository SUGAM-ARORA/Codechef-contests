#include <bits/stdc++.h>
using namespace std;

void res()
{
    int n,zero=0,one=1; 
    cin>>n;
    string str; 
    cin>>str;
    char x='1',y='0';
    for(int i=1; i<n; i++)
    {
        if(x!=str[i-1])
        {
            x='1'; one++;
        }
        else x='0';
         if(y!=str[i-1])
         {
            y='1';
            zero++;
        }
        else y='0';
    }
    cout<<max(zero,one)<<endl;
}

int main()
{
 int T; 
 cin>>T; 
 while(T--) 
 res();
 return 0;
}