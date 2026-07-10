#include <iostream>
#include <map>
#include <vector>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        map<int, int> freq;
 
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            freq[x]++;
        }
 
        if (freq.size() == 1) {
            cout << "Yes
";
        }
        else if (freq.size() != 2) {
            cout << "No
";
        }
        else {
            auto it = freq.begin();
            int c1 = it->second;
            ++it;
            int c2 = it->second;
 
            if (n % 2 == 0) {
                cout << (c1 == c2 ? "Yes" : "No") << '
';
            } else {
                cout << (abs(c1 - c2) == 1 ? "Yes" : "No") << '
';
            }
        }
    }
 
    return 0;
}