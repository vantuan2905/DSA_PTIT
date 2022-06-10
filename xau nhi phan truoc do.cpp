#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int n,a[200000];
void sinh(){
	int i=n-1;
	while(a[i]==0){
		a[i]=1;i--;
	}
	if(i==-1) for(int j=0;j<n;j++) a[j]=1;
	else a[i]--;
}
main(){
	int t;
	cin>>t;
	while(t--){
	   string s;
		cin>>s; n=s.length();
		for(int i=0;i<n;i++) a[i]=s[i]-'0';
		sinh();
		for(int i=0;i<n;i++) cout<<a[i];
		cout<<endl;
	}
}
