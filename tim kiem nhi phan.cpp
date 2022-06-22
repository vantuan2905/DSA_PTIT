#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int ans;
void bin_s(int a[],int l,int r,int k){
	if(l>r) return;
	int mid=(l+r)/2;
	if(a[mid]==k){
		ans=mid+1;return;
	}else{
		if(a[mid]>k){
			bin_s(a,l,mid-1,k);
		}else bin_s(a,mid+1,r,k);
	}
	
}
main(){
	int t;
	cin>>t;
	while(t--){
		int n,a[2000],k;ans=-1;
		cin>>n>>k;
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		bin_s(a,0,n-1,k);
		if(ans==-1) cout<<"NO"<<endl;
		else cout<<ans<<endl;
	}
}
