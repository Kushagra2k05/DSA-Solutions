#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        long long odd = 0, e0 = 0, e2 = 0;
        for (int i = 0; i < n; i++) {
            long long x;
            cin >> x;
            if (x & 1) odd++;
            else if (x % 4 == 0) e0++;
            else e2++;
        }
        cout << max(odd, max(e0, e2)) << '
';
    }
    return 0;
}