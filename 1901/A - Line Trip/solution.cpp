#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n, x;
        cin >> n >> x;
 
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
 
        int max_gap = 0;
 
        max_gap = a[0];
 
        for (int i = 1; i < n; i++) {
            max_gap = max(max_gap, a[i] - a[i - 1]);
        }
 
        int last_part = 2 * (x - a[n - 1]);
 
        int answer = max(max_gap, last_part);
 
        cout << answer << "
";
    }
 
    return 0;
}