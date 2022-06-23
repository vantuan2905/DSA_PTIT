#include<iostream>
#include<bits/stdc++.h>
using namespace std;
long long chuyen(string s){ long long x=0,j=0;
	for(int i=s.length()-1;i>=0;i--,j++){
		if(s[i]=='1'){
			x+=pow(2,j);
		}
	}
	return x;
}
main(){
	int t;
	cin>>t;
	while(t--){
		string a,b;cin>>a>>b;
		long long x=chuyen(a),y=chuyen(b);
		cout<<x*y<<endl;
	}	
}
