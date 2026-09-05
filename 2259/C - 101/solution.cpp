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
        vector<int> ones, neg;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] == 1) ones.push_back(i);
            else if (a[i] == -1) neg.push_back(i);
        }
 
        int L = -1, R = -1, best = 0;
        auto upd = [&](int l, int r) {
            if (r - l + 1 > best) { best = r - l + 1; L = l; R = r; }
        };
 
        if (ones.empty()) {
            if (!neg.empty()) upd(neg.front(), neg.back());
        } else {
            upd(ones[0], ones[0]);                       // baseline: score 1
            for (size_t i = 1; i < ones.size(); i++)
                upd(ones[i - 1], ones[i]);               // between consecutive 1s
            if (!neg.empty() && neg.front() < ones.front())
                upd(neg.front(), ones.front());          // extend left
            if (!neg.empty() && neg.back() > ones.back())
                upd(ones.back(), neg.back());            // extend right
        }
 
        for (int i = 0; i < n; i++) if (a[i] == -1) a[i] = 0;
        if (L != -1) { a[L] = 1; a[R] = 1; }
 
        for (int i = 0; i < n; i++) cout << a[i] << " 
"[i == n - 1];
    }
    return 0;
}