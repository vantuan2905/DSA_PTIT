#include<iostream>
#include<bits/stdc++.h>
using namespace std;
struct gt{
	int c,w;
};
main(){
	int t;
	cin>>t;
	while(t--){
		int n,W;int dp[1005][100];gt a[20000];
		cin>>n>>W;
		for(int i=1;i<=n;i++) cin>>a[i].w;
		for(int i=1;i<=n;i++) cin>>a[i].c;
		for(int i=1;i<=n;i++){
			for(int j=0;j<=W;j++){
				if(j<a[i].w) dp[i][j]=dp[i-1][j];
				else{
					dp[i][j]=max(dp[i-1][j],dp[i-1][j-a[i].w]+a[i].c);
				}
			}
			
		}
		cout<<dp[n][W]<<endl;
	}
}
