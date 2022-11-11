#include<bits/stdc++.h>
using namespace std;
#define ll long long


void maths()
{ 
    ll n;
    cin>>n;
    vector <ll> arr(n);

    unordered_map<ll,ll> x;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        x[arr[i]]++;
    }
    ll ans=0;
    for(auto i:x){
        if(i.second>1){
            ll x=i.second;
            ans+=x*(x-1)/2;
        }
    }

    cout<<ans<<endl;

} 

int main()
{
    int T; cin>>T;
    while(T--)
    {
        maths();
    }

    return 0;
}