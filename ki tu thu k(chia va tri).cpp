#include<iostream>
#include<bits/stdc++.h>
using namespace std;
main(){
	int t;
	cin>>t;
	while(t--){
		long long n,k,a;string s;
		cin>>s>>k;n=s.length();
		while(n<k){
			n=n*2;
		}
		while(1){
			
			if(k==n/2+1){
				k--;
			}else{
			    if(k>n/2)
				k=k-n/2-1;
			}
			//cout<<k<<endl;
			n/=2;
			if(k<=s.length()){
				cout<<s[k-1]<<endl;break;
			}
		}
	}
}
