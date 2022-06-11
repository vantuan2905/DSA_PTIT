#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int n,k,a[2000],b[2000];
int check(){
	for(int i=1;i<=k;i++) if(a[i]!=b[i]) return 0;return 1;
} int d=0;
void ql(int i){
	
	for(int j=a[i-1]+1;j<=n-k+i;j++){
		a[i]=j;
	//	if(i==k) cout<<endl;
		if(i==k){
		//	for(int i=1;i<=k;i++) cout<<a[i]<<" ";cout<<endl;
			if(check()){
			cout<<d+1<<endl;return;
			}else d++;
		}else ql(i+1);
	}
}
main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n>>k;a[0]=0;d=0;
		for(int i=1;i<=k;i++){
			cin>>b[i];
		}
		ql(1);
	}
}
