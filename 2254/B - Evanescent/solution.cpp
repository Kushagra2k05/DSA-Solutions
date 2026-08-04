#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        vector<char> ch;
        vector<int> len;
 
        for (int i = 0; i < n; ) {
            int j = i;
            while (j < n && s[j] == s[i]) j++;
            ch.push_back(s[i]);
            len.push_back(j - i);
            i = j;
        }
        int R = ch.size();
        int ans = R;
        for (int i = 1; i + 1 < R; i++) {
            if (len[i] == 1) {
                if (ch[i - 1] == ch[i + 1])
                    ans = min(ans, R - 2);
                else
                    ans = min(ans, R - 1);
            }
        }
 
        cout << ans << '
';
    }
 
    return 0;
}