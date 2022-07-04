#include<iostream>
#include<bits/stdc++.h>
using namespace std;
main(){
	int t;
	cin>>t;
	while(t--){
		string a,b;
		cin>>a>>b;a="0"+a;b="0"+b;int dp[100][100]={0};
		for(int i=1;i<a.length();i++){
			for(int j=1;j<b.length();j++){
				if(a[i]==b[j]){ dp[i][j]=dp[i-1][j-1]+1;}
				else dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
			//	cout<<i<<"  "<<j<<" "<<dp[i][j]<<"  \n";
			}
		}
		cout<<dp[a.length()-1][b.length()-1]<<endl;
	}
}
