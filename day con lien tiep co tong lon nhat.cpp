#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int n,a[200];int m;
int sum(int l,int mid,int r){
	int x,y,z;x=y=z=-1;int sum1=0,sum2=0,sum3=0;
	for(int i=mid;i>=l;i--){
		sum1+=a[i];x=max(x,sum1);
	}
	for(int i=mid+1;i<=r;i++){
		sum2+=a[i];y=max(y,sum2);
	}
	return x+y;
	
}
long long summax(int l,int r){
	if(l==r) return a[l];
	if(l<r){ int mid=(l+r)/2;
		int x=summax(l,mid);
		int y=summax(mid+1,r);
		int z=sum(l,mid,r);
		return max(max(x,y),z);
	}
}
main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		cout<<summax(0,n-1)<<endl;
	}
}
