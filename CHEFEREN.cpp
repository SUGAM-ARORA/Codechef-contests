#include <iostream>
using namespace std;

int main() {
int T;
cin>>T;
while(T--)
{ 
int x,y,z;
cin>>x>>y>>z;
if(x>1)
{
if(x%2==0)
cout<<((x/2)*y)+(x/2)*z;
else
cout<<(((x/2)+1)*z)+((x/2)*y);
}
else
cout<<z;
cout<<endl;
}
return 0;
}