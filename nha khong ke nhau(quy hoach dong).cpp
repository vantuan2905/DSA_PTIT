#include<iostream>
#include<bits/stdc++.h>
using namespace std;
main(){
	int t;
	cin>>t;
	while(t--){
		int n,a[2000000];
		cin>>n;
		for(int i=0;i<n;i++) cin>>a[i];
		long long s=0;
		long long dp[1000005];
		dp[0]=a[0];dp[1]=max(a[0],a[1]);
		for(int i=2;i<n;i++){
			dp[i]=max(dp[i-1],dp[i-2]+a[i]);
		}
		cout<<dp[n-1]<<endl;
	}
}
