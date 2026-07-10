#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
 
        int count_sleep = 0;
        int blocked_until = -1; 
 
        for (int i = 0; i < n; i++) {
            if (s[i] == '1') {
                blocked_until = i + k;
            } 
            else { 
                if (i > blocked_until) {
                    count_sleep++; 
                }
            }
        }
 
        cout << count_sleep << "
";
    }
}