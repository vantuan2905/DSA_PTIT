#include<iostream>
#include<bits/stdc++.h>
using namespace std;
string ds[200];int n,k,ok[2000],a[2000];int f=1e9;
void kt(){
	int s1=-1,s2=1e9;
	for(int i=0;i<k;i++){ int x=0;
		for(int j=0;j<n;j++) x=x*10+(ds[i][a[j]]);
		s1=max(s1,x);s2=min(s2,x);
	}
	f=min(f,s1-s2);
}
void ql(int j){
	for(int i=0;i<n;i++){
		if(ok[i]==0){
			ok[i]=1;
			a[j]=i;
			if(j==n-1){
				kt();
			}else ql(j+1);
			ok[i]=0;
		}
	}
}
main(){
	int t;
	t=1;
	while(t--){
		cin>>k>>n;
		for(int i=0;i<k;i++) cin>>ds[i];
		ql(0);cout<<f<<endl;
	}
}
