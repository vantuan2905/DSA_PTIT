#include<iostream>
#include<bits/stdc++.h>
using namespace std;
main(){
	int t;
	cin>>t;
	while(t--){
		int n;vector<int> a;
		cin>>n;
		for(int i=0;i<n;i++){
			int x;
			cin>>x;
			a.push_back(x);
			
		}
		sort(a.begin(),a.end());
		for(int i=0;i<n;i++) cout<<a[i]<<" ";
		cout<<endl;
	}
}
