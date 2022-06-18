#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int n;string s;vector<string > v;int a[2000];
void ql(int i,string ss){
	if(i>s.length()) return;//cout<<1;
	for(int j=a[i-1]+1;j<s.length();j++){
		a[i]=j;//cout<<j<<" ";
		v.push_back(ss+s[j]);
		ql(i+1,ss+s[j]);
	}
}
main(){
	int t;
	cin>>t;
	while(t--){v.clear();
		cin>>n>>s;a[0]=-1;
		ql(1,"");
	//	sort(v.begin(),v.end());
		for(int i=0;i<v.size();i++) cout<<v[i]<<" ";cout<<endl;
	}
}
