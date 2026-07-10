#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        bool possible = true;
        for (int i = 0; i < k; i++) {
            int cnt = 0;
            for (int j = i; j < n; j += k) {
                if (s[j] == '1')
                    cnt++;
            }
            if (cnt % 2 != 0) {
                possible = false;
                break;
            }
        }
        if (possible)
            cout << "YES
";
        else
            cout << "NO
";
    }
}