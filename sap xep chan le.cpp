#include<iostream>
#include<bits/stdc++.h>
using namespace std;
main(){
	int t;
	t=1;
	while(t--){
		int n;vector<int> a,b;
		cin>>n;
		for(int i=1;i<=n;i++){
			int x;
			cin>>x;
			if(i%2==1) a.push_back(x);
			else b.push_back(x);
		}
		sort(a.begin(),a.end());sort(b.begin(),b.end(),greater<int>());int j=0,k=0;
		for(int i=1;i<=n;i++){
			if(i%2==1) cout<<a[j++]<<" ";
			else cout<<b[k++]<<" ";
		}
		cout<<endl;
	}
}
