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
 
        vector<long long> a(n), b(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];
 
        // Prefix sum of strikes
        vector<long long> pref(n);
        pref[0] = b[0];
        for (int i = 1; i < n; i++) pref[i] = pref[i - 1] + b[i];
 
        // Sort the strengths
        sort(a.begin(), a.end());
 
        long long ans = 0;
 
        // Iterate unique x values
        int i = 0;
        while (i < n) {
            long long x = a[i];
 
            // Count swords >= x
            int idx = lower_bound(a.begin(), a.end(), x) - a.begin();
            long long S = n - idx; // usable swords
 
            // Find max L such that pref[L-1] <= S
            int L = upper_bound(pref.begin(), pref.end(), S) - pref.begin();
 
            // Score = x * L
            ans = max(ans, x * L);
 
            // Skip duplicates
            while (i < n && a[i] == x) i++;
        }
 
        cout << ans << "
";
    }
    return 0;
}