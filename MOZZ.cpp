#include <bits/stdc++.h>
using namespace std;
int main() 
{
  // your code goes here
  int A;
  cin>>A;
  while(A--)
  {
      float x,y,r;
      cin>>x>>y>>r;
      float z = r/30;
      float k = z+x;
      float v = k/y;
      cout<< ceil(v) <<endl;
  }
  return 0;
}
