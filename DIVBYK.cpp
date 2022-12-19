#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define size_2 100002


ll arr_2[4 * size_2];
void set_in(ll fit, ll first, ll last, const ll* arr, ll k)
{
   if (first == last)
   {
      arr_2[fit] = (1LL * arr[first]) % k;
      return;
   }
   ll level = (first + last) >> 1;
   set_in(2 * fit, first, level, arr, k);
   set_in(2 * fit + 1, level + 1, last, arr, k);
   arr_2[fit] = (arr_2[2 * fit] * arr_2[2 * fit + 1]) % k;
}
ll check(ll fit, ll first, ll last, ll start, ll end, ll k)
{
   if(first > last)
   {
      return 1;
   }
   if(first > end)
   {
      return 1;
   }
   if(last < start)
   {
      return 1;
   }
   if (first >= start)
   {
      if(last <= end)
      {
         return arr_2[fit] % k;
      }
   }
   ll level = (first + last) >> 1;
   ll set_1 = check(2 * fit, first, level, start, end, k);
   ll set_2 = check(2 * fit + 1, level + 1, last, start, end, k);
   ll res = (set_1 * set_2) % k;
   return res;
}
ll product_k(ll arr[], ll size, ll k)
{
   ll res = 0;
   for (ll i = 0; i < size; i++)
   {
      for (ll j = i; j < size; j++)
      {
         ll temp = check(1, 0, size - 1, i, j, k);
         if (temp == 0){
            res++;
         }
      }
   }
   return res;
}

void soln()
{ 
  
   ll n,k;
   cin>>n>>k;
   ll arr[n];
   for(ll i=0;i<n;i++)
    cin>>arr[i];
    
   ll size = sizeof(arr) / sizeof(arr[0]);
   
   set_in(1, 0, size - 1, arr, k);
   ll c=product_k(arr, size, k);
   if(c)
   cout<<"YES"<<endl;
   else
   cout<<"NO"<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin>>T;
    while(T--)
    {
      soln();
    }
 
  return 0;
}
