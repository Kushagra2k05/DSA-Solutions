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
 
        string a, b;
        cin >> a >> b;
 
        int ea = 0, oa = 0, eb = 0, ob = 0;
 
        for (int i = 0; i < n; i++) {
            if (a[i] == '1') {
                if (i % 2 == 0)
                    ea++;
                else
                    oa++;
            }
 
            if (b[i] == '1') {
                if (i % 2 == 0)
                    eb++;
                else
                    ob++;
            }
        }
 
        if (ea == eb && oa == ob)
            cout << "YES
";
        else
            cout << "NO
";
    }
 
    return 0;
}