#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int n,k,a[2000];vector<string> v;
int check(){
	for(int i=1;i<=n-k+1;i++){ int cnt=0,j=i;
		while(a[j]==0&&j<=n){
			cnt++;j++;
		}
		if(cnt==k) return 1;else i=j;
	}
	return 0;
}
void ql(int i){
	for(int j=0;j<=1;j++){
		a[i]=j;
		if(i==n){
			if(check()){
				string s="";
				for(int x=1;x<=n;x++){
					if(a[x]==0) s+="A";
					else s+="B";
				}
				v.push_back(s);
			}
		}else ql(i+1);
	}
}
main(){
	int t;
	t=1;
	while(t--){
		cin>>n>>k;
		ql(1);
		cout<<v.size()<<endl;
		for(int i=0;i<v.size();i++) cout<<v[i]<<" \n";
		//cout<<endl;
	}
}
