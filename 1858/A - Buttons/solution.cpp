#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        long long a, b, c;
        cin >> a >> b >> c;
 
        if (a > b)
            cout << "First
";
        else if (a < b)
            cout << "Second
";
        else {
            if (c % 2)
                cout << "First
";
            else
                cout << "Second
";
        }
    }
 
    return 0;
}