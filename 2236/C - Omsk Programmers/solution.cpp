#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
 
    while(t--){
        long long a,b,x;
        cin>>a>>b>>x;
 
        vector<pair<long long,long long>> A,B;
 
        long long cur=a;
        int cost=0;
 
        while(true){
            A.push_back(make_pair(cur,cost));
            if(cur==0) break;
            cur/=x;
            cost++;
        }
 
        cur=b;
        cost=0;
 
        while(true){
            B.push_back(make_pair(cur,cost));
            if(cur==0) break;
            cur/=x;
            cost++;
        }
 
        long long ans=llabs(a-b);
 
        for(int i=0;i<(int)A.size();i++){
            for(int j=0;j<(int)B.size();j++){
                long long va=A[i].first;
                long long ca=A[i].second;
                long long vb=B[j].first;
                long long cb=B[j].second;
 
                long long target=max(va,vb);
 
                long long total=ca+cb+(target-va)+(target-vb);
 
                ans=min(ans,total);
            }
        }
 
        cout<<ans<<endl;
    }
}