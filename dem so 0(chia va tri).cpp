#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int n,a[2000];
void xuli(int l,int r,int sum){
	if(l>r){
		cout<<sum<<endl;return;
	}
	int mid=(l+r)/2;
	if(a[mid]==0){
		xuli(mid+1,r,sum+(mid-l+1));
	}else{
		xuli(l,mid-1,sum);
	}
}
main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		for(int i=0;i<n;i++) cin>>a[i];
		xuli(0,n-1,0);
	}
}
