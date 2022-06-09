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
		int i=0;
		while(a[i]<a[i+1]&&i<n-1) i++;
		if(i==n-1) cout<<0<<endl;
		else cout<<i+1<<endl; 
	}
}
