#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int n,k,a[200],b[200];int cnt;
void ql(int i,int so){
	if(so==k){
		cnt++;return;
	}
	for(int j=b[i-1]+1;j<=n;j++){
		if(a[j]>a[b[i-1]]){
			b[i]=j;
			ql(i+1,so+1);
		}
	}
}
main(){
	int t;
	t=1;
	while(t--){
		cin>>n>>k;
		for(int i=1;i<=n;i++) cin>>a[i];
		b[0]=-1;
		ql(1,0);
		cout<<cnt<<endl;
	}
}
