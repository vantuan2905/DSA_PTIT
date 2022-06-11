#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int n,a[2000],b[2000];int d;int ok[2000];
int check(){
	for(int i=0;i<n;i++) if(a[i]!=b[i]) return 0;
	return 1;
}
void ql(int i){
	for(int j=1;j<=n;j++){
		if(ok[j]==0){
			a[i]=j;
			ok[j]=1;
			if(i==n-1){
				if(check()){
					cout<<d+1<<endl;return;
				}else d++;
			}else ql(i+1);
			ok[j]=0;
		}
	}
}
main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n;d=0;memset(a,0,sizeof(a));memset(ok,0,sizeof(ok));
		for(int i=0;i<n;i++) cin>>b[i];
		ql(0);
	}
}
