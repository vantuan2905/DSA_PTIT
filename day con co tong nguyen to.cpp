#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int n,a[2000],b[200];vector<vector<int> > v;int ok[20000];
void ql(int i,int sum){
	if(i>n) return;
	for(int j=b[i-1]+1;j<=n;j++){
		b[i]=j;
		if(ok[sum+a[j]]==0){ vector<int> vv;
			for(int x=1;x<=i;x++) vv.push_back(a[b[x]]);
			v.push_back(vv);
		}
		ql(i+1,sum+a[j]);
	}
}
main(){
	int t;
	cin>>t;ok[0]=ok[1]=1;
	for(int i=2;i<500;i++){
		if(ok[i]==0){
			for(int j=i*i;j<3000;j+=i) ok[j]=1;
		}
	}
	while(t--){
		cin>>n;v.clear();
		for(int i=1;i<=n;i++) cin>>a[i];
		sort(a+1,a+n+1,greater<int>());
		ql(1,0);
		sort(v.begin(),v.end());
		for(int i=0;i<v.size();i++){
			for(int j=0;j<v[i].size();j++){
				cout<<v[i][j]<<" ";
			}cout<<endl;
		}
	}
}
