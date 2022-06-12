#include<iostream>
#include<bits/stdc++.h>
using namespace std;int id=0;
int n,m;
void ql(int i,int j){
	if(i>n-1||j>m-1) return;
	if(i==n-1&&j==m-1) id++;
	else{
		ql(i+1,j);
		ql(i,j+1);
	}
}
main(){
	int t;
	cin>>t;
	while(t--){int a[200][200];id=0;
	cin>>n>>m;
		for(int i=0;i<n;i++) for(int j=0;j<m;j++) cin>>a[i][j];
		ql(0,0);
		cout<<id<<endl;
	}
}
