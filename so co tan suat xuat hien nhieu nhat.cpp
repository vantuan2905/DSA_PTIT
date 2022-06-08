#include<iostream>
#include<bits/stdc++.h>
using namespace std;
main(){
	int t;
	cin>>t;
	while(t--){
		int n,a[20000];int kt=0;
		cin>>n; map<int,int> m;
		for(int i=0;i<n;i++){ cin>>a[i];m[a[i]]++;}
		for(map<int,int>::iterator i=m.begin();i!=m.end();i++){
			if((*i).second>n/2){
				cout<<(*i).first<<endl;kt=1;break;
			}
		}
		if(kt==0) cout<<"NO\n";
	}
}
