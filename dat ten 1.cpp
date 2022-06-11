#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int n,a[20000];set<string> s;int k;string ds[2000];vector<string> v;
void ql(int i){
	for(int j=a[i-1]+1;j<=n-k+i;j++){
		a[i]=j;
		if(i==k){
			for(int p=1;p<=k;p++){
				cout<<ds[a[p]]<<" ";
			}
			cout<<endl;
		}else ql(i+1);
	}
}
main(){
	int t;
	t=1;
	while(t--){
		cin>>n>>k;
		for(int i=0;i<n;i++){
			string ss;
			cin>>ss;
			s.insert(ss);
		}
		n=s.size();int x=0;
		for(set<string>::iterator i=s.begin();i!=s.end();i++){
			ds[++x]=*i;
		}
		a[0]=0;
		ql(1);
	}
}
