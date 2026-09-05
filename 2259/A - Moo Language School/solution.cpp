#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        string s;
        cin >> n >> k >> s;
 
        int ans = 0;
        for (int i = 0; i < n; i += k) {
            bool allOwned = true;
            for (int j = i; j < i + k; j++)
                if (s[j] == '0') { allOwned = false; break; }
            ans += allOwned;
        }
        cout << ans << '
';
    }
    return 0;
}