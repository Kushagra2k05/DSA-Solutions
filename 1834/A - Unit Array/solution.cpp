#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t;
	cin>>t;
	while(t--){
	    int x;
	    cin>>x;
	    vector<int>arr(x);
	    for(int i=0;i<x;i++){
	        cin>>arr[i];
	    }
	    int neg=0;
	    int ans=0;
	    for(int i=0;i<x;i++){
	        if(arr[i]==-1){
	            neg++;
	        }
	    }
	    while(neg>x/2){
	        neg--;
	        ans++;
	    }
	    if(neg%2!=0){
	        ans++;
	    }
	    cout<<ans<<endl;
	}
 
}