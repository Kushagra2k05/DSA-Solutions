#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<long long> arr(n);
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    long long mini=INT_MAX;
	    long long maxi=INT_MIN;
	    for(int i=0;i<n;i++){
	        mini=min(arr[i],mini);
	        maxi=max(arr[i],maxi);
	    }
	    long long result=(maxi-mini)+1;
	    cout<<result<<endl;
	}
 
}