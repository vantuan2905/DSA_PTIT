#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int n,a[2000],b[2000],k;vector<vector<int> > v;
void ql(int i,int sum){ 
	if(i>n) return;
	if(sum<0) return;
	if(i==n){
	if(sum==0){ vector<int> vv;
		for(int x=0;x<i;x++){
			for(int xx=0;xx<b[x];xx++){
				vv.push_back(a[x]);
			}
		}
		v.push_back(vv);return;
	} return;
}
	for(int j=sum/a[i];j>=0;j--){ b[i]=j;//cout<<a[i]<<" "<<j<<" \n";
		ql(i+1,sum-j*a[i]);
	}
}
main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n>>k;v.clear();
		for(int i=0;i<n;i++) cin>>a[i];
		sort(a,a+n);
		ql(0,k);
		if(v.size()==0){
			cout<<-1<<endl;continue;
		}
		cout<<v.size()<<endl;
		for(int i=0;i<v.size();i++){ cout<<"{";
			for(int j=0;j<v[i].size()-1;j++) cout<<v[i][j]<<" ";
			cout<<v[i][v[i].size()-1]<<"} ";
		}
		cout<<endl;
	}
}
