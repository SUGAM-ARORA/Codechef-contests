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
      int w=0,i=1;
      while(y<x)
      {
          w++;
          y+=i;
          i++;
      }
      cout<<w<<endl;
  }
  return 0;
}
