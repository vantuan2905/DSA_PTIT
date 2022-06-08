#include<iostream>
#include<bits/stdc++.h>
using namespace std;
main(){
	int t;
	cin>>t;
	while(t--){
		long n,k,a[200000];
		cin>>n>>k;
		for(int i=0;i<n;i++) cin>>a[i];
		sort(a,a+n);int kt=0;
		for(int i=n-1;i>=2&&kt==0;i--){
			int l=0,r=i-1;
			while(l<r){
				if(a[l]+a[r]+a[i]==k){
					kt=1;break;
				}else{
					if(a[l]+a[r]+a[i]<k) l++;
					else r--;
				}
			}
		}
		if(kt) cout<<"YES\n";
		else cout<<"NO\n";
	}
}
