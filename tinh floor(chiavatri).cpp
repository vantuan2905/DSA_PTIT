#include<iostream>
#include<bits/stdc++.h>
using namespace std;
long long a[200],n,x,res;
void tk(int l,int r){
	if(l>=r) return;
	int mid=(l+r)/2;
	if(a[mid]<=x){
		res=mid+1;tk(mid+1,r);
	}else{
		tk(l,mid-1);
	}
}
main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n>>x;res=-1;
		for(int i=0;i<n;i++) cin>>a[i];
		tk(0,n-1);
		cout<<res<<endl;
	}
}\
