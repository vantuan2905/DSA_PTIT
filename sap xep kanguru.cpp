#include<iostream>
#include<bits/stdc++.h>
using namespace std;
main(){
	int t;
	cin>>t;
	while(t--){
		int n,a[200];
		cin>>n;
		for(int i=0;i<n;i++) cin>>a[i];
		sort(a,a+n);
		int mid=n/2;
		int l=0,r=mid;int d=0;
		while(l<mid&&r<n){ //cout<<l<<" "<<a[l]<<"   "<<r<<" "<<a[r]<<endl;
			if(a[r]>=2*a[l]){
				d++;r++;l++;//n--;
			}else r++;
		}
		cout<<n-d<<endl;
	}
}
