#include<iostream>
#include<bits/stdc++.h>
using namespace std;
main(){
	int t;
	cin>>t;
	while(t--){
		int n,a;int s;
		cin>>n>>s;int dp[2000]={0};
		dp[0]=1;
		for(int i=0;i<n;i++){
			cin>>a;
			for(int j=s;j>=a;j--){
				if(dp[j-a]==1) dp[j]=1;
			}
		}
		if(dp[s]) cout<<"YES\n";
		else cout<<"NO\n";
	}
}
