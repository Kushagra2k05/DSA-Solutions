#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t;
	cin>>t;
	while(t--){
	    int x;
	    cin>>x;
	    int cnt=0;
	    bool pss=true;
	    while(x!=1){
	        if(x%6==0){
	            x=x/6;
	            pss=true;
	            cnt++;
	        }else if(x%3==0){
	            x=x*2;
	            pss=true;
	            cnt++;
	        }else{
	            pss=false;
	            break;
	        }
	    }
	    if(pss){
	        cout<<cnt<<endl;
	    }else{
	        cout<<-1<<endl;
	    }
	}
}