#include<iostream>
#include<bits/stdc++.h>
using namespace std;
main(){
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n;int cnt=1;int i=2,j=3,k=5;int dp[1005];dp[i]=dp[j]=dp[k]=1;//n++;
		dp[1]=1;m=n;
		while(n--){
			dp[++cnt]=min(dp[i]*2,min(dp[j]*3,dp[k]*5));//cout<<cnt<<' '<<dp[cnt]<<endl;
			if(dp[cnt]==dp[i]*2) i++;
			if(dp[cnt]==dp[j]*3) j++;
			if(dp[cnt]==dp[k]*5) k++;
		}
		cout<<dp[m]<<endl;
	}
}
