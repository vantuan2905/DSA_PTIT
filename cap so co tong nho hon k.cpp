#include<iostream>
#include<bits/stdc++.h>
using namespace std;
main(){
	int t;
	cin>>t;
	while(t--){
		long long n,a[20000];int k;
		cin>>n>>k;long long d=0;
		for(int i=0;i<n;i++) cin>>a[i];
		sort(a,a+n);
		for(int i=0;i<n-2;i++){
			for(int j=i+1;j<n-1;j++){
				long x=lower_bound(a+j+1,a+n,k-a[i]-a[j])-(a+j+1);//cout<<x<<" ";
				d+=x;
			}
		}
		cout<<d<<endl;
	}
}
