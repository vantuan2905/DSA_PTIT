#include<iostream>
#include<bits/stdc++.h>
using namespace std;
string s;int n;int ok;
void sinh(){
	n=s.length();ok=0;string a=s;
	int i=n-2;
	while(a[i]>=a[i+1]) i--;
	if(i==-1) ok=-1;
	else{
		int j=n-1;
		while(a[j]<a[i]){
			j--;
		}
		swap(a[i],a[j]);
		reverse(a.begin()+i+1,a.end());
	}
	s=a;
}
main(){
	int t,tt;
	cin>>t;
	while(t--){
		cin>>tt>>s;
		sinh();
		if(ok==-1) cout<<tt<<" "<<"BIGGEST";else cout<<tt<<" "<<s;
		cout<<endl;
	}
}
