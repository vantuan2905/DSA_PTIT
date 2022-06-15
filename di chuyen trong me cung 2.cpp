#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int n,a[200][200];int ok[200][200];int o;vector<string> v;
void ql(int i,int j,string s){
	
	if(i==n&&j==n){
		v.push_back(s);o=1;return;
	}
	if(a[i+1][j]==1&&i+1<=n&&ok[i+1][j]==0){
		ok[i][j]=1;
		ql(i+1,j,s+"D");
		ok[i][j]=0;
	}
	if(a[i][j+1]==1&&j+1<=n&&ok[i][j+1]==0){
		ok[i][j]=1;
		ql(i,j+1,s+"R");
		ok[i][j]=0;
	}
	if(a[i-1][j]==1&&i-1>0&&ok[i-1][j]==0){
		ok[i][j]=1;
		ql(i-1,j,s+"U");
		ok[i][j]=0;
	}
	if(a[i][j-1]==1&&j-1>0&&ok[i][j-1]==0){
		ok[i][j]=1;
		ql(i,j-1,s+"L");
		ok[i][j]=0;
	}
}
main(){
	int t;
	cin>>t;
	while(t--){o=0;v.clear();memset(a,0,sizeof(a));
		cin>>n;
		for(int i=1;i<=n;i++) for(int j=1;j<=n;j++) cin>>a[i][j];
		if(a[1][1]==0||a[n][n]==0){
			cout<<-1<<endl;continue;
		}
		ql(1,1,"");
		sort(v.begin(),v.end());
		for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
		if(v.size()==0) cout<<-1;
		cout<<endl;
	}
}
