#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int n,parent[1005],a[1005];
void makeset(){
	for(int i=1;i<=n;i++){
		parent[i]=i;
	}
}
int find(int u){
	if(u==parent[u]) return u;
	else return parent[u]=find(parent[u]);
}
void unionn(int u,int v){
	u=find(u);v=find(v);
	if(u==v) return;
	parent[u]=v;
}
main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		
	}
}
