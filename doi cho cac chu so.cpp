#include<iostream>
#include<bits/stdc++.h>
using namespace std;
string ma="";
void ql(string s,int k,int st){
	if(k==0||st==s.length()-1) return;
	char c=s[st];
	for(int i=st+1;i<s.length();i++){
		if(s[i]>c) c=s[i];
	}
	k-=(c>s[st])?1:0;
	for(int i=st;i<s.length();i++){
		if(s[i]==c){
			swap(s[i],s[st]);if(s>ma) ma=s;
			ql(s,k,st+1);
			swap(s[i],s[st]);
		}
	}
}
main(){
	int t;
	cin>>t;
	while(t--){
		string s;int k;
		cin>>k;cin.ignore();cin>>s;ma=s;
		ql(s,k,0);cout<<ma<<endl;
	}
}
