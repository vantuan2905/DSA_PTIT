#include<iostream>
#include<bits/stdc++.h>
using namespace std;
long long n,a[2000],k;int f;
void ql(long long i,long long sum,int cnt){
	if(i>n) return;
	if(sum>k||cnt>f) return;
	if(sum==k){
		f=min(f,cnt);return;
	}
	
			ql(i+1,sum+a[i],cnt+1);
		ql(i+1,sum,cnt);
}
main(){
	int t;
	t=1;
	while(t--){
		cin>>n>>k;f=1000;
		for(int i=0;i<n;i++) cin>>a[i];
		ql(0,0,0);if(f!=1000) cout<<f<<endl;else cout<<-1<<endl;
	}
}
