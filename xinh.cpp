#include<iostream>
#include<bits/stdc++.h>
using namespace std;
main(){
	int t;
	cin>>t;
	while(t--){
		int n; vector<int> v;
		cin>>n;
		for(int i=0;i<n;i++){
			int a;cin>>a;
			v.push_back(a);
		}
		sort(v.begin(),v.end());
		int c=0,d=n-1;
		while(c<d){
			cout<<v[d]<<" "<<v[c]<<" ";c++;d--;
			if(c==d) cout<<v[c];
		}cout<<endl;
	}
}
