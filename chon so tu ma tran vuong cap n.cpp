#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int n,a[200][200],h[200],cot[200],k;vector<vector<int> > v;
void ql(int i,int sum){
	if(i==n){
		if(sum==k){vector<int> ds;
		for(int x=0;x<n;x++){
			ds.push_back(h[x]);
		}v.push_back(ds);
		}
	}
	for(int j=0;j<n;j++){
		if(cot[j]==0){h[i]=j;
			cot[j]=1;
			ql(i+1,sum+a[i][j]);
			cot[j]=0;
		}
	}
}
main(){
	int t;
	t=1;
	while(t--){
		cin>>n>>k;
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++) cin>>a[i][j];
		}
		ql(0,0);
		cout<<v.size()<<endl;
		for(int i=0;i<v.size();i++){
			for(int j=0;j<v[i].size();j++) cout<<v[i][j]+1<<" ";
			cout<<endl;
		}
	}
}
