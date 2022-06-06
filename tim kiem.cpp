#include<iostream>
#include<bits/stdc++.h>
using namespace std;
main(){
	int t;
	cin>>t;
	while(t--){
		int n,a[20000];int x;
		cin>>n>>x;
		for(int i=0;i<n;i++) cin>>a[i];
		int t1=binary_search(a,a+n,x);
		if(t1) cout<<1<<endl;
		else cout<<-1<<endl;
	}
}
