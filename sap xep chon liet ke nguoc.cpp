#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void ql(int a[],int i,int n){
	vector<int> v;
	if(i==n) return;
	int id=i,m=a[i];
	while(id>0&&m<a[id-1]){
		a[id]=a[id-1];id--;
	}
	a[id]=m;
//	swap(a[j],a[i]);//cout<<i+1<<endl;
	for(int x=0;x<=i;x++) v.push_back(a[x]);
	ql(a,i+1,n);
	cout<<"Buoc "<<i<<": ";
	for(int x=0;x<=i;x++) cout<<v[x]<<" ";
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
