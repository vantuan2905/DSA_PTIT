#include<iostream>
#include<bits/stdc++.h>
using namespace std;
main(){
	int t;
	cin>>t;
	while(t--){
		int n,a[20000];
		cin>>n;long long x=0,y=0;
		for(int i=0;i<n;i++){
			cin>>a[i];
			y+=a[i];
		} int kt=0;y-=a[0];
		for(int i=0;i<n;i++){
			if(x==y){kt=i; break;}
			x+=a[i];y-=a[i+1];
		}
		if(x==y) cout<<kt+1<<endl;
		else cout<<-1<<endl;
	}
}
