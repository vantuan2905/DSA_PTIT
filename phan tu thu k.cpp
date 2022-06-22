#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int bin_search(int a[],int l,int r,int k){
	if(l>r) return -1;
	if(l<r){
	int mid=(l+r)/2;
	if(a[mid]==k) return mid;
	else if(a[mid]>k) return bin_search(a,l,mid-1,k);else return bin_search(a,mid+1,r,k);
}
}
main(){
	int t;
	cin>>t;
	while(t--){
		int n,m,k;cin>>n>>m>>k;
		int a[200000];
		for(int i=0;i<n+m;i++) cin>>a[i];
		sort(a,a+n+m);
		cout<<a[k-1]<<endl;
		
	}
}
