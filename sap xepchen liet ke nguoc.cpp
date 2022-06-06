#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void ql(int a[],int i,int n){
	vector<int> v;
	if(i==n-1) return;
	int j=i,min=a[i];
	for(int x=i+1;x<n;x++){
		if(min>a[x]){
			min=a[x];j=x;
		}
	}
	swap(a[j],a[i]);//cout<<i+1<<endl;
	for(int x=0;x<n;x++) v.push_back(a[x]);
	ql(a,i+1,n);
	cout<<"Buoc "<<i+1<<": ";
	for(int x=0;x<n;x++) cout<<v[x]<<" ";
	cout<<endl;
}
main(){
	int t;t=1;
	while(t--){
		int n,a[2000];
		cin>>n;
		for(int i=0;i<n;i++) cin>>a[i];
		ql(a,0,n);
	}
}
