#include<bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin>>T;
    while(T--)
    {
    int a,b,ans=INT_MAX;
    cin>>a>>b;
    string s;
    cin>>s;
    int arr[a];
    int count=0;
    for(int i=1; i<a; i++){
        if(s[i-1]!=s[i]){
            count++;
            arr[i]=count;
        }
        else
        arr[i]=count;
    }
    arr[0]=0;
    for(int i=a-1; i>=0; i--){
        if((i-(b-1))<0) break;
        int check=arr[i]-arr[i-b+1];
        if(s[i]=='0') check++;
        ans = min(ans, check);
    }
    cout<<ans<<endl;
    }
}