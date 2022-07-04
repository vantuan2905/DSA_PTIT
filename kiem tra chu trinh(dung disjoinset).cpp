#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int n,m;
struct gt{
	int a,b;
};
vector<gt> v; 
int par[1005];
void makeset(){
	for(int i=1;i<=n;i++) par[i]=i;
}
int find(int u){
	if(u==par[u]) return u;
	return par[u]=find(par[u]);
}
int check(){
	for(int i=0;i<v.size();i++){
		int aa=find(v[i].a),bb=find(v[i].b);
		if(aa==bb) return 0;
		par[bb]=aa;
	}
	return 1;
}
main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n>>m;v.clear();
		for(int i=0;i<m;i++){
			gt g;
			cin>>g.a>>g.b;
			v.push_back(g);
		}
		makeset();
		if(check()==0) cout<<"YES\n";
		else cout<<"NO\n";
	}
}
