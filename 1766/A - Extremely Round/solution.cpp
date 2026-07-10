#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t;
	cin>>t;
	while(t--){
	    long long x;
	    cin>>x;
	    long long temp=x;
	    long long digit=0;
	    while(temp>0){
	        digit++;
	        temp/=10;
	    }
	    temp=x;
	    while(temp>=10){
	        temp/=10;
	    }
	    long long firstnumber=temp;
	    long long ans=9*(digit-1)+firstnumber;
	    cout<<ans<<endl;
	}
 
}