#include<iostream>
#include<bits/stdc++.h>
using namespace std;
main(){
	int t;
	cin>>t;
	while(t--){
		int n,a[20000];
		cin>>n;long dp[20000];
		for(int i=0;i<n;i++) cin>>a[i];long ans=0;
		dp[0]=a[0];ans=a[0];
		for(int i=1;i<n;i++){ int m=0;
			for(int j=0;j<i;j++){
				if(a[i]>a[j]&&m<dp[j]){
					m=dp[j];
				}
			}
			dp[i]=m+a[i];ans=max(ans,dp[i]);
		}
		cout<<ans<<endl;
	}
}
