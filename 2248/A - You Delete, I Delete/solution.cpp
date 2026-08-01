#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        string s;
        cin >> s;
 
        int pos0 = s.find('0');
        s.erase(pos0, 1);
 
        int pos1 = s.find('1');
        s.erase(pos1, 1);
 
        cout << s << '
';
    }
 
    return 0;
}