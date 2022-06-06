#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void ql(int a[],int i,int n){
	vector<int> v;int kt=1;
	//if(i==n) return;
	for(int j=0;j<n-i-1;j++){
		if(a[j]>a[j+1]){//cout<<a[j]<<" "<<a[j+1]<<endl;
			kt=0;swap(a[j],a[j+1]);
		}
	}
	for(int j=0;j<n;j++) v.push_back(a[j]);
	if(kt==0) ql(a,i+1,n);else return;
	cout<<"Buoc "<<i+1<<": ";
	for(int x=0;x<n;x++) cout<<v[x]<<" ";
	cout<<endl;
}
main(){
	int t;cin>>t;
	while(t--){
		int n,a[2000];
		cin>>n;
		for(int i=0;i<n;i++) cin>>a[i];
		ql(a,0,n);
	}
}
