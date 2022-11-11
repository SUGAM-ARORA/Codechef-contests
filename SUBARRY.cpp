#include<bits/stdc++.h>
using namespace std;
#define ll long long


void solve(){ 
    ll N; 
    cin >> N;
    
    vector<ll> a(N);
    for(int i=0;i<N;i++) 
        cin >> a[i];
    
    ll minn = LLONG_MAX;
    for(ll i = 0; i < N; i++) 
    {
        if(a[i] >= 0 && minn > a[i]) 
        {
            minn = a[i];
        }
    }  
    ll minnn = *min_element(a.begin(), a.end());
    ll maxxx = *max_element(a.begin(), a.end());
    if(minn == LLONG_MAX) 
    {
        cout << maxxx * maxxx << " " << minnn * minnn << endl;
    }   
    else {
        if(minnn < 0) 
        {
            cout << minnn * maxxx << " " << max(maxxx * maxxx, minnn * minnn) << endl;
        }
        else 
        {
            cout << minnn * minnn << " " << maxxx * maxxx << endl;
        }
    }

} 

int main(){
    int tc; 
    cin>>tc;
    while(tc--)
    {
        solve();
    }

    return 0;
}
