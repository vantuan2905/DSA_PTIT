#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int n,k,a[2000],b[2000];
vector<vector<int> > v;
void ql(int i,int sum){
	//if(i>n) return;
	if(1){
	if(sum==0){
		vector<int> vv;
		for(int j=0;j<i;j++){
			
			for(int x=0;x<b[j];x++){
				vv.push_back(a[j]);
			}
			//v.push_back(vv);
		}
		v.push_back(vv);
		return;
	}
}
if(i>=n) return;
	for(int j=sum/a[i];j>=0;j--){
		b[i]=j;
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
		for(int i=0;i<v.size();i++){
			cout<<"["<<v[i][0];
			for(int j=1;j<v[i].size();j++) cout<<" "<<v[i][j];
			cout<<"]";
		}
		if(v.size()==0) cout<<-1; cout<<endl;
		
	}
}
