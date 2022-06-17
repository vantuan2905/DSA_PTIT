#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int n,k,a[2000],b[200];vector<vector<int > > v;
void ql(int i){
	if(i==k+1){ vector<int> vv;
		for(int j=1;j<i;j++) cout<<a[b[j]]<<" ";cout<<endl;
		return;
	}
	for(int j=b[i-1]+1;j<=n;j++){
		b[i]=j;
		ql(i+1);
	}
}
main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n>>k;
		for(int i=1;i<=n;i++) cin>>a[i];
		sort(a+1,a+n+1);
		ql(1);
		
	}
}
