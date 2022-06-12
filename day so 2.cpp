#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void ql(vector<int> v,int n){
	if(n==1){
		cout<<"["<<v[0]<<"] ";
	}else{
		
		vector<int> a;
		for(int i=1;i<n;i++){
			a.push_back(v[i-1]+v[i]);
		}
		ql(a,n-1);cout<<"[";;for(int i=0;i<n-1;i++) cout<<v[i]<<" ";cout<<v[n-1]<<"] ";
	}
}
main(){
	int t;
	cin>>t;
	while(t--){int n; vector<int> a;
		cin>>n;
		for(int i=0;i<n;i++){
			int x;
			cin>>x;
			a.push_back(x);
		}
		ql(a,n);cout<<endl;
	}
}
