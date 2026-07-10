#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while (t--) {
 
        int n, s, x;
        cin >> n >> s >> x;
 
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
 
        int sum = 0;
        for (int v : a) sum += v;
 
        if (sum > s) {
            cout << "NO
";
        } 
        else if ((s - sum) % x == 0) {
            cout << "YES
";
        } 
        else {
            cout << "NO
";
        }
    }
    return 0;
}
 