#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
int T;
cin>>T;
while(T--)
{
int length;
cin >> length;
string inst;
cin >> inst;
if (length % 3 == 1)
{
cout << "YES\n";
continue;
}
bool res = false;
 for (char ch = 'a'; ch <= 'z'; ch++)
{
int firstIndex = length + 1, lastIndex = -1;
for (int i = 0; i < length; i++)
{
if (i % 3 == 0 && inst[i] == ch)
 {
firstIndex = i;
 break;
}
}
for (int i = length - 1; i >= 0; i--)
{
 int x = length - 1 - i;
if (x % 3 == 0 && inst[i] == ch)
{
lastIndex = i;
break;
}
}

if (firstIndex < lastIndex)
{
res = true;
break;
}
}
if (res)
cout << "YES\n";
else
cout << "NO\n";
}
 return 0;
}