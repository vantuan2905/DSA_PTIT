#include<iostream>
#include<bits/stdc++.h>
using namespace std;
main(){
	int t;
	cin>>t;
	while(t--){
		int n,a[200000];deque<int> d;int k;
		cin>>n>>k;
		for(int i=0;i<n;i++) cin>>a[i];
		for(int i=0;i<k;i++){
			while(d.size()&&a[i]>=a[d.back()]){
				d.pop_back();
			}
			d.push_back(i);
		}
		for(int i=k;i<=n;i++){
			while(d.front()<i-k)  d.pop_front();
			cout<<a[d.front()]<<" ";
			while(d.size()&&a[i]>=a[d.back()]){
				d.pop_back();
			}
			d.push_back(i);
		}cout<<endl;
	}
}
