#include<iostream>
#include<bits/stdc++.h>
using namespace std;
main(){
	int t;
	cin>>t;
	while(t--){
		int n,a[200000];int k;int cnt=0;
		cin>>n>>k;map<int,int> m;
		for(int i=0;i<n;i++){ cin>>a[i];m[a[i]]++;}
		for(int i=0;i<n;i++){
			if(k-a[i]!=a[i]) cnt+=m[k-a[i]];
			else cnt+=m[a[i]]-1;
			m[a[i]]--;
		}
		cout<<cnt<<endl;
	}
}
