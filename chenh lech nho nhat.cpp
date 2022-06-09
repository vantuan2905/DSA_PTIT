#include<iostream>
#include<bits/stdc++.h>
using namespace std;
main(){
	int t;
	cin>>t;
	while(t--){
		int n,a[20000];
		cin>>n;
		for(int i=0;i<n;i++) cin>>a[i];
		sort(a,a+n);int m=1e9;
		for(int i=0;i<n-1;i++){
			m=min(m,a[i+1]-a[i]);
		}
		cout<<m<<endl;
	}
}
