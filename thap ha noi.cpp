#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void ql(int n,char a,char b,char c){
	if(n==1){
		cout<<a<<" -> "<<c<<endl;
	}else{
		ql(n-1,a,c,b);
		ql(1,a,b,c);
		ql(n-1,b,a,c);
	}
}
main(){
	int t;
	cin>>t;
	while(t--){
		int n;char a='A',b='B',c='C';
		cin>>n;
		ql(n,a,b,c);
	}
}
