#include<iostream>
#include<bits/stdc++.h>
using namespace std;
string s="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
long long lt(int n){
	if(n==0) return 1;
	long long x=lt(n/2);
	if(n%2==1) return x*x*2;
	else return x*x;
}
main(){
	int t;
	cin>>t;
	while(t--){
		long long n,k;
		cin>>n>>k;
		long long len=lt(n)-1;len=len/2+1;
		while(1){
			if(n==1){ cout<<s[k-1]<<endl;break;}
			if(k==len){
				cout<<s[n-1]<<endl;break;
			}
			if(k>len) k=k-len;
			len/=2;n--;
		}
	}
}
