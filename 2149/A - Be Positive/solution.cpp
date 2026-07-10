#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
 
    while(t--) {
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++) {
            cin>>a[i];
        }
        int ans =0, c=0;
        for (int i=0;i<n;i++) {
            if (a[i]==-1) {
                c++;
            }else {
                ans+=1-a[i];
            }
        }
        if (c%2) {
            ans+=2;
        }
        cout<<ans<<endl;
    }
}