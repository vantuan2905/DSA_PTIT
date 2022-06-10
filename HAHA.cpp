#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int n,a[2000];int k;vector<string> v;
int dk(){
	if(a[1]!=0||a[n]!=1) return 0;
	for(int i=1;i<n;i++) if(a[i]==a[i+1]&&a[i]==0) return 0;
	return 1;
}
void ql(int j){
	for(int i=0;i<=1;i++){
		a[j]=i;
		if(j==n){
			if(dk()){ string s="";
			for(int x=1;x<=n;x++){
				if(a[x]==0) s+="H";
				else s+="A";
			} v.push_back(s);
		}
		}else ql(j+1);
	}
}
main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		ql(1);//cout<<endl;
		sort(v.begin(),v.end());
		for(int i=0;i<v.size();i++){
			cout<<v[i]<<endl;
		}
	}
}
