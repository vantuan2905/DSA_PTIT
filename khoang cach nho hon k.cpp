#include<iostream>
#include<bits/stdc++.h>
using namespace std;int n;
int res=0;
void lb(long long a[],int l,int r,long long key){
	if(l>r) return;
	int mid=(l+r)/2;
	if(a[mid]>=key){
		res=mid;lb(a,l,mid-1,key);
	}else{
		lb(a,mid+1,r,key);
	}
}
main(){
	int t;
	cin>>t;
	while(t--){
		long long k,a[2000];
		cin>>n>>k;
		for(int i=0;i<n;i++) cin>>a[i];
		sort(a,a+n);long long cnt=0;
		for(int i=0;i<n-1;i++){res=n;lb(a,0,n-1,a[i]+k);
			cnt+=res-(i+1);
		}
		cout<<cnt<<endl;
	}
}
