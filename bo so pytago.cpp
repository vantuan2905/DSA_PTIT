#include<iostream>
#include<bits/stdc++.h>
using namespace std;
main(){
	int t;
	cin>>t;
	while(t--){
		long long n,a[20000];
		cin>>n;
		for(int i=0;i<n;i++) cin>>a[i];
		int i=n-1;int kt=0;sort(a,a+n);
		while(i>=2&&kt==0){
			int l=0,r=i-1;
			while(l<r){// cout<<l<<"  "<<r<<endl;
				if(a[l]*a[l]+a[r]*a[r]==a[i]*a[i]){
					kt=1;break;
				}else{
					if(a[l]*a[l]+a[r]*a[r]>a[i]*a[i]) r--;
					else l++;
				}
			}
			i--;
		}
		if(kt) cout<<"YES\n";
		else cout<<"NO\n";
	}
}
