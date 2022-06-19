#include<iostream>
#include<bits/stdc++.h>
using namespace std;
long n,k,a[2000];int f;
void ql(int i,long sum,int cnt){
	if(sum>k||i>n) return;
	if(i==n){
		if(sum==k){
			f=min(f,cnt);
		}
		return;
	}
	ql(i+1,sum+a[i],cnt+1);
	ql(i+1,sum,cnt);
}
main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n>>k;f=100000;
		for(int i=0;i<n;i++) cin>>a[i];
		ql(0,0,0);
		if(f==100000) cout<<-1<<endl;
		else
		cout<<f<<endl;
	}
}
