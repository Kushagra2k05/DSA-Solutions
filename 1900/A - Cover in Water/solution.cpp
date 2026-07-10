#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t;
	cin>>t;
	while(t--){
	    string s;
	    int n;
	    cin>>n;
	    cin>>s;
	    bool is_water_continous=false;
	    int Total_count=0;
	    for(int i=0;i<n;i++){
	        if(s[i]=='.'&& (i+1) <n && s[i+1]=='.'&& (i+2)<n && s[i+2]=='.'){
	            is_water_continous=true;
	        }if(s[i]=='.'){
	            Total_count++;
	        }
	    }
	    if(is_water_continous){
	        cout<<2<<endl;
	    }else{
	        cout<<Total_count<<endl;
	    }
	    
	}
 
}