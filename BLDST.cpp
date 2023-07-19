#include <iostream> 
#include <vector> 
using namespace std; 
 
int main() 
{ 
    int T; 
    cin>>T; 
    while(T--) 
    { 
        int N, M; 
        cin >> N >> M; 
        vector<int> L(M); 
        for (int i = 0; i < M; i++) 
        { 
            cin >> L[i]; 
        } 
         int res = 0; 
        for (int i = 0; i < M; i++) 
        { 
            res += N - L[i]; 
        } 
        cout << max(0, N - res)<< endl; 
    } 
    return 0; 
}
