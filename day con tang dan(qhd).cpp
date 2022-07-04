#include<iostream>
#include<bits/stdc++.h>
using namespace std;
main(){
	int t;
	t=1;
	while(t--){
		int n,a[20005];
		cin>>n;
		for(int i=0;i<n;i++) cin>>a[i];
		int dp[2005]={0};
		dp[0]=1;int ans=0;
		for(int j=1;j<n;j++){
			for(int i=0;i<j;i++){
				  if(a[i]<a[j]){
			     	dp[j]=max(dp[i],dp[j]);
					} 
			}
			dp[j]++;
			//cout<<dp[j]<<" ";
			ans=max(ans,dp[j]);
		}
		cout<<ans<<endl;
	}
}
