#include<bits/stdc++.h>
using namespace std;
#define ll long long


void solve(){
    int N; cin>>N;
    vector<int> arr(N),brr(N),temp1(N),temp2(N);

    for(int i=0;i<N;i++){
        cin>>arr[i];
        temp1[i]=arr[i];
    }

    for(int i=0;i<N;i++){
        cin>>brr[i];
        temp2[i]=brr[i];
    }

    sort(temp1.begin(),temp1.end());

    sort(temp2.begin(),temp2.end());

    temp1.erase(unique(temp1.begin(),temp1.end()),temp1.end());

    temp2.erase(unique(temp2.begin(),temp2.end()),temp2.end());

    for(int i=0;i<N;i++){
        arr[i]=lower_bound(temp1.begin(),temp1.end(),arr[i])-temp1.begin();
    }

    for(int i=0;i<N;i++){
        brr[i]=lower_bound(temp2.begin(),temp2.end(),brr[i])-temp2.begin();
    }

    int temp=0,ans=0;

    vector<int> p(N),q(N),r,crr(N);

    for(int i=0;i<N;i++){
        crr[arr[i]]=brr[i];
        p[i]=arr[i]+brr[i];
        q[brr[i]]=i;
    }

    for(int i=0;i<N;i++){
        r.insert(upper_bound(r.begin(),r.end(),crr[i]),crr[i]);
        p[q[crr[i]]]-=lower_bound(r.begin(),r.end(),crr[i])-r.begin();
    }

    for(auto  i:p){
        temp=max(i,temp);
    }

    for(auto i:p){
        ans+=(i==temp);
    }

    cout<<ans<<endl;

}

int main(){
    int tc=1; 
    cin>>tc;
    while(tc--){
        solve();
    }

    return 0;
}