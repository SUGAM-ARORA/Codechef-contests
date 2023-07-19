#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;
int main() 
{
    int T;
    cin >> T;
    while (T--) 
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        unordered_set<int> unique_set;
        int max_distinct = 0;
        int current_distinct = 0;

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            if (unique_set.find(arr[i]) != unique_set.end()) {
                current_distinct -= 1;
                unique_set.erase(arr[i]);
            } 
            else 
            {
                current_distinct += 1;
                unique_set.insert(arr[i]);
            }
            if (current_distinct > max_distinct) 
            {
                max_distinct = current_distinct;
            }
        }
        cout << max_distinct << endl;
    }
    return 0;
}