#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) 
    {
        long long int n;
        cin >> n;

        long long int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];

        long long int sum = 0;
        for (int i = 0; i < n; i++)
            sum = sum + a[i];

        sort(a, a + n);
        cout << sum << " ";

        for (int i = 0; i < n - 1; i++) {
            sum -= a[i];
            cout << sum << " ";
        }
        cout << "\n";
    }

    return 0;
} 
