#include<iostream>
#include<bits/stdc++.h>
using namespace std;
main(){
	int t;
	cin>>t;
	while(t--){
		int n,a[20000];
		cin>>n;map<int,int> m;
		for(int i=0;i<n;i++){
			cin>>a[i];m[a[i]]++;
		}int kt=-1;
		for(int i=0;i<n;i++){
			if(m[a[i]]>1){
				kt=a[i];break;
			}
		}
		if(kt==-1) cout<<"NO\n";
		else cout<<kt<<endl;
	}
}
