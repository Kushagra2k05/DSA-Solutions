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
        vector<int> v(n);
        int evencount = 0, oddcount = 0;
        
        for (int i = 0; i < n; i++) {
            cin >> v[i];
            if (v[i] % 2 == 0) evencount++;
            else oddcount++;
        }
 
        if (evencount == 0 || oddcount == 0) {
            // All numbers are of same parity — print as is
            for (int x : v) cout << x << " ";
            cout << "
";
        } else {
            // Both even and odd numbers exist — sort the array
            sort(v.begin(), v.end());
            for (int x : v) cout << x << " ";
            cout << "
";
        }
    }
}