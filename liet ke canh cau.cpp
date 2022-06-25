#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int n,m,ok[2000];vector<int> v[2000];int cnt;
void dfs(int i){
	ok[i]=1;
	for(int j=0;j<v[i].size();j++){
		int s=v[i][j];
		if(ok[s]==0) dfs(s);
	}
}
int dem(){int x=0;;
	for(int i=1;i<=n;i++){
		if(ok[i]==0){x++;
	//	memset(ok,0,sizeof(ok));
		dfs(i);
	}
}
memset(ok,0,sizeof(ok));
	return x;
}
void canhcau(){
	for(int i=1;i<=n;i++){ 
		for(int j=0;j<v[i].size();j++){ int tmp=0;
			int s=v[i][j],x=0;
			if(s<i) continue;
			v[i].erase(v[i].begin()+j,v[i].begin()+j+1);
			for(int k=0;k<v[s].size();k++){
				if(v[s][k]==i){
					x=k;v[s].erase(v[s].begin()+x,v[s].begin()+x+1);break;
				}
			}
			tmp=dem();
			if(tmp>cnt){
				cout<<i<<" "<<s<<""<<" ";
			}
			v[i].insert(v[i].begin()+j,s);
			v[s].insert(v[s].begin()+x,i);
		}
	}
}
main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n>>m;memset(ok,0,sizeof(ok));
		memset(v,0,sizeof(v));
		for(int i=0;i<m;i++){
			int a,b;
			cin>>a>>b;
			v[a].push_back(b);
			v[b].push_back(a);
		}
		cnt=dem();cout<<cnt<<endl;
		canhcau();cout<<endl;
	}
}

