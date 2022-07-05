#include<iostream>
#include<bits/stdc++.h>
using namespace std;
main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		long long dp[20000]={0};
		dp[1]=dp[0]=1;
		for(int i=2;i<=s.length();i++){
			if(s[i-1]=='0'){
				if(s[i-2]=='1'||s[i-1-1]=='2') dp[i]=dp[i-2];
				else{ //cout<<s[i-1]<<" "<<s[i]<<"  ";
					dp[s.length()-1]=0;break;
				}
			}else{
				dp[i]=dp[i-1];
				if((s[i-2]=='1')||(s[i-2]=='2'&&s[i-1]<'7')) dp[i]+=dp[i-2];
			}
		}
		if(s[0]=='0'||(s[1]=='0'&&s[0]>'2')) cout<<0<<endl;
		else
		cout<<dp[s.length()]<<endl;
	}
}
