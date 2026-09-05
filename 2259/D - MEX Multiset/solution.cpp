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
        vector<int> a(n);
        int c0 = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] == 0) c0++;
        }
 
        if (c0 == 1) { cout << "NO
"; continue; }
 
        string s(n, 'C');
        if (c0 == 0) {
            s.assign(n, 'A');
        } else {
            int seen = 0;
            for (int i = 0; i < n; i++) {
                if (a[i] == 0 && seen < 2) s[i] = (seen++ == 0 ? 'A' : 'B');
                else if (a[i] == 2) s[i] = 'A';
            }
        }
        cout << "YES
" << s << '
';
    }
    return 0;
}