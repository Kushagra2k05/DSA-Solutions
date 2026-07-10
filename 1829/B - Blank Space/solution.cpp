#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int>arr(n);
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    int now=0;
	    int maxi=0;
	    for(int i=0;i<n;i++){
	        if(arr[i]==0){
	            now++;
	            maxi=max(now,maxi);
	            }
	            if(arr[i]==1){
	                now=0;
	            }
	        }
	        cout<<maxi<<endl;
	}
 
}