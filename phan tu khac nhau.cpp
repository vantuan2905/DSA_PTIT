#include<iostream>
#include<bits/stdc++.h>
using namespace std;
long long n,a[2000],b[2000],res;
void xuli(int l,int r){
	if(l>r){
		cout<<res+1<<endl;return;
	}else{
		int mid=(l+r)/2;
		if(a[mid]==b[mid]){
			xuli(mid+1,r);
		}else{ res=mid;
			xuli(l,mid-1);
		}
	}
}
main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		for(int i=0;i<n;i++) cin>>a[i];
		for(int j=0;j<n-1;j++) cin>>b[j];
		xuli(0,n-1);
	}
}
