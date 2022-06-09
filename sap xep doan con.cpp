#include<iostream>
#include<bits/stdc++.h>
using namespace std;
main(){
	int t;
	cin>>t;
	while(t--){
		int n,a[200000];
		cin>>n;vector<int> v;
		for(int i=0;i<n;i++) cin>>a[i];
		int b[200000],c[200000];b[0]=a[0];
		for(int i=1;i<n;i++){
			b[i]=max(b[i-1],a[i]);
		}
		c[n-1]=a[n-1];
		for(int i=n-2;i>=0;i--){
			c[i]=min(c[i+1],a[i]);
		}
		for(int i=0;i<n-1;i++){
			if(b[i]<=c[i+1]) v.push_back(i);
		}
		cout<<v.size()<<endl;
		for(int i=0;i<v.size();i++) cout<<v[i]+1<<" ";
		cout<<endl;
	}
}
