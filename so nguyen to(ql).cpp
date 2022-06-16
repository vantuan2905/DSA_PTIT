#include<iostream>
#include<bits/stdc++.h>
using namespace std;
vector<int> v;int n,p,s,a[200];vector<int> ds[200];int cnt;
void ql(int i,int sum){
	if(i>n+1) return;
	if(i==n+1&&sum==s){ //cout<<sum<<endl;
		for(int j=1;j<i;j++){
			ds[cnt].push_back(v[a[j]]);
		}cnt++;
	}
	for(int j=a[i-1]+1;v[j]<=s;j++){
		if(sum+v[j]<=s){a[i]=j;
			ql(i+1,sum+v[j]);
		}
	}
}
main(){
	int t;
	cin>>t;
	int ok[500]={0};
	ok[0]=ok[1]=0;
	for(int i=2;i<300;i++){
		if(ok[i]==0){
			for(int j=i*i;j<300;j+=i) ok[j]=1;
		}
	}
	for(int i=2;i<300;i++) if(ok[i]==0) v.push_back(i);
	while(t--){memset(ds,0,sizeof(ds));
		cin>>n>>p>>s;cnt=0;
		for(int i=0;i<v.size();i++){
			if(v[i]==p){
				a[0]=i;break;
			}
			if(v[i]>p){
				a[0]=i-1;break;
			}
		}
		ql(1,0);
		cout<<cnt<<endl;
		for(int i=0;i<cnt;i++){
			for(int j=0;j<ds[i].size();j++){
				cout<<ds[i][j]<<" ";
			}cout<<endl;
		}
	}
}
