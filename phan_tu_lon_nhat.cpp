#include<iostream>
#include<bits/stdc++.h>
using namespace std;
main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;multiset<int> s;
		for(int i=0;i<n;i++){
			int x;
			cin>>x;
			s.insert(x);
		}
		multiset<int>::iterator i=s.end();i--;  
		while(k>0){
			k--;cout<<*i<<" ";i--;
		}
		cout<<endl;
	}
}
