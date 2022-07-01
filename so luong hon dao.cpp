#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int n,m,a[1005][1005];
int x[10]={-1,-1,-1,0,0,1,1,1};
int y[10]={-1,0,1,-1,1,-1,0,1};
void dfs(int i,int j){
	a[i][j]=0;//cout<<i<<"  "<<j<<endl;
	for(int k=0;k<8;k++){
		int ij=i+x[k],ji=j+y[k];
		if(ij>=0&&ij<n&&ji>=0&&ji<m&&a[ij][ji]==1) dfs(ij,ji);
	}
}
main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n>>m;
		for(int i=0;i<n;i++) for(int j=0;j<m;j++) cin>>a[i][j];
		int cnt=0;
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				if(a[i][j]==1){
					cnt++;
					dfs(i,j);//cout<<endl;
				}
			}
		}
		cout<<cnt<<endl;
	}
}
