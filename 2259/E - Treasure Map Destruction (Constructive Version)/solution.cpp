#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        vector<int> b(n), diff(n + 1, 0);
        for (int i = 0; i < n; i++) {
            scanf("%d", &b[i]);
            if (b[i] >= 1) {                       // ban [i-k+1, i+k-1]
                int l = max(0, i - b[i] + 1);
                int r = min(n - 1, i + b[i] - 1);
                diff[l]++; diff[r + 1]--;
            }
        }
 
        string s(n, '0');
        int cur = 0, cnt = 0;
        for (int i = 0; i < n; i++) {
            cur += diff[i];
            if (cur == 0) { s[i] = '1'; cnt++; }
        }
 
        bool ok = (cnt > 0);
        if (ok) {
            const int INF = INT_MAX / 2;
            vector<int> d(n, INF);
            for (int i = 0; i < n; i++) {
                if (s[i] == '1') d[i] = 0;
                else if (i > 0) d[i] = min(d[i], d[i - 1] + 1);
            }
            for (int i = n - 2; i >= 0; i--) d[i] = min(d[i], d[i + 1] + 1);
            for (int i = 0; i < n; i++)
                if (b[i] != -1 && d[i] != b[i]) { ok = false; break; }
        }
 
        puts(ok ? s.c_str() : "-1");
    }
    return 0;
}