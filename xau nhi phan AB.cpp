#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int n,a[2000];
void ql(int i){
	for(int j=0;j<=1;j++){
		a[i]=j;
		if(i==n){
			for(int x=1;x<=n;x++){
				if(a[x]==1) cout<<"B";
				else cout<<"A";
				
			}
			cout<<" ";
		}else ql(i+1);
	}
}
main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		ql(1);cout<<endl;
	}
}
