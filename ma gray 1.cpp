#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int n,a[2000];vector<string> v;int ok=0;
void ql(int i){
	for(int j=0;j<=1;j++){
		a[i]=j;
		if(i==n){
			string s="";
			for(int i=1;i<=n;i++) s+=(a[i]+'0');
			v.push_back(s);
		}else ql(i+1);
		}
}
string xo(string a){string s="";
	for(int i=0;i<a.length();i++){
		if(i==0) s+=a[i];
		else{
			if(a[i]!=a[i-1]) s+="1";
			else s+="0";
		}
	}
	return s;
}
main(){
	int t;
	cin>>t;
	while(t--){v.clear();
		cin>>n;
		ql(1);
		for(int i=0;i<v.size();i++){
			string s=xo(v[i]);cout<<s<<" ";
		}
		cout<<endl;
	}
}
