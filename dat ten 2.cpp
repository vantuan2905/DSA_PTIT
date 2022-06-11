#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int n,a[20000],k;string s="1ABCDEFGHIJKLMNOPQRSTUVWXYZ";
void ql(int i){
	for(int j=a[i-1]+1;j<=n-k+i;j++){
		a[i]=j;
		if(i==k){
			for(int x=1;x<=k;x++) cout<<s[a[x]];cout<<endl;//return;
		}else ql(i+1);
	}
}
main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n>>k;
		a[0]=0;
		ql(1);
	}
}
