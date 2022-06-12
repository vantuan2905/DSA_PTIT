#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int n,a[200][200];int ok,x;
void ql(int i,int j,string s){
	if(a[n][n]==0||a[1][1]==0){
		ok=1;return;
	}
	if(i==n&&j==n){
		cout<<s<<" ";x++;
	}else{
		if(a[i+1][j]==1&&i<n){//ok[i+1][j]=1;
			ql(i+1,j,s+"D");//ok[i+1][j]=0;
		}
		if(a[i][j+1]==1&&j<n){//ok[i+1][j]=1;
			ql(i,j+1,s+"R");//ok[i+1][j]=0;
		}
	}
}
main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n;ok=0;x=0;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++) cin>>a[i][j];
		}
		ql(1,1,"");
		if(ok==1||x==0) cout<<-1;
		cout<<endl;
	}
}
