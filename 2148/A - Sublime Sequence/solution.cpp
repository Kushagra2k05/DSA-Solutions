#include <bits/stdc++.h>
using namespace std;
int main() {
    std:ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int x,c;
        cin >> x >> c;
        if (c%2) {
            cout<<x<<"
";
        }else {
            cout<<0<<"
";
        }
    }
    return 0;
    }