#include <iostream>
using namespace std;

int main() 
{
 int T,n,count;
 cin>>T;
 while(cin>>n)
 {
     count=1;
     string str,res;
     cin>>str;
     for(int i=1; i<n; i++)
     {
         if(str[i-1]==str[i]) 
         count++;
         else{
             if(count&1) res+=str[i-1];
             else{
                 res+=str[i-1];
                 res+=str[i-1];
             }
             count=1;
         }
     }
     if(count&1) res+=str[n-1];
     else{
         res+=str[n-1];
         res+=str[n-1];
     }
     cout<<res<<endl;
 }
 return 0;
}
