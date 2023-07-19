#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
  int T;
  cin >>T;
  while(T--)
  {
    int n;
    cin >> n;
    int l[n];
    for(int i = 0; i < n; i++)
    {
        cin >> l[i];
    }
    int m[n];
    for(int i = 0; i < n; i++){
        cin >> m[i];
    }
    unordered_map<int, int> mp;
    for(int i = 0; i < n; i++)
    {
        mp[l[i]]++;
        mp[m[i]]++;
    }
    int res = 1;
    for(auto &it : mp)
    {
        res = max(res, it.second);
    }
    cout << res << endl;
    }
    return 0;
}