#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int f[2000];
void de(int n,int k){
	if(n==1){
		cout<<0<<endl;return;
	}
	if(n==2){
		cout<<1<<endl;return;
	}
	if(k<=f[n-2]){
		de(n-2,k);
	}else{
		de(n-1,k-f[n-2]);
	}
}
main(){
	int t;
	f[1]=f[2]=1;
	for(int i=3;i<93;i++) f[i]=f[i-1]+f[i-2];
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		de(n,k);
	}
}
