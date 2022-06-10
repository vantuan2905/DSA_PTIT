#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int n,a[200000];string s;
		
void sinh(){
	int i=s.length()-1;
	while(s[i]=='1'){
		s[i]='0';
		i--;
	}
	if(i==-1){
		for(i=0;i<s.length();i++) s[i]='0';
	}
	else s[i]='1';
}
main(){
	int t;
	cin>>t;
	while(t--){
		cin>>s;sinh();
		cout<<s<<endl;
	}
}
