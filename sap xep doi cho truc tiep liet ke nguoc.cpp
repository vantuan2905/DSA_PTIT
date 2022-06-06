#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void ql(int a[],int i,int n){
	vector<int> v;
	if(i==n-1) return;
	for(int j=i+1;j<n;j++){
		if(a[i]>a[j]) swap(a[i],a[j]);
	}
	for(int x=0;x<n;x++) v.push_back(a[x]);
	ql(a,i+1,n);
	cout<<"Buoc "<<i+1<<": ";
	for(int x=0;x<n;x++) cout<<v[x]<<" ";
	cout<<endl;
}
main(){
	int t;
	cin>>t;
	while(t--){
		int n,a[2000];
		cin>>n;
		for(int i=0;i<n;i++) cin>>a[i];
		ql(a,0,n);
	}
}
