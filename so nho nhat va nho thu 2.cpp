#include<iostream>
#include<bits/stdc++.h>
using namespace std;
main(){
	int t;
	cin>>t;
	while(t--){
		int n;set<int> s;
		cin>>n;
		for(int i=0;i<n;i++){
			int x;
			cin>>x;
			s.insert(x);
		}
		if(s.size()>1){ cout<<*s.begin()<<" ";cout<<*++s.begin()<<endl;}
		else cout<<-1<<endl;
	}
}
