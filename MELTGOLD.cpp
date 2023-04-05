#include <iostream>
using namespace std;

int main() {
  // your code goes here
  int T;
  cin>>T;
  while(T--)
  {
      int x,y;
      cin>>x>>y;
      int z=0,i=1;
      while(y<x)
      {
          z++;
          y+=i;
          i++;
      }
      cout<<z<<endl;
  }
  return 0;
}