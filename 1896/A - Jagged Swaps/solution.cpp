#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t;
	cin>>t;
	while(t--){
	    int b;
	    cin>>b;
	    vector<int>a(b);
	    for(int i=0;i<b;i++){
	        cin>>a[i];
	    }
	    if(a[0]==1){
	        cout<<"YES"<<endl;;
	    }else{
	        cout<<"NO"<<endl;
	    }
	}
 
}