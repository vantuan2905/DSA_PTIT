#include<iostream>
#include<bits/stdc++.h>
using namespace std;
struct gt{
	int a,c;
};
int cmp(gt aa,gt bb){
	return aa.c/aa.a>bb.c/bb.a;
}
int n,w;gt ds[2000];int ok[200],b[200],fp;
void ql(int i,int coin,int wei){
	for(int j=b[i-1]+1;j<=n;j++){
		if(wei+ds[j].a<=w){ //cout<<1;
			b[i]=j;
			if(coin+ds[j].c>fp){
				cout<<"   "<<j<<"-"<<ds[j].c<<"+"<<coin<<" "<<coin<<"  -- ";
				fp=coin+ds[j].c;cout<<fp<<"    ";
				memset(ok,0,sizeof(ok));
				for(int x=1;x<=i;x++){ ok[b[x]]=1;cout<<b[x]<<" ";}cout<<endl;
			}
			if(coin+(w-wei)*(ds[j].c/ds[j].a)>fp) ql(i+1,coin+ds[i].c,wei+ds[i].a);
		}
	}
}
main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n>>w;
		for(int i=1;i<n+1;i++){
			cin>>ds[i].c;
		}
		for(int i=1;i<=n;i++){
			cin>>ds[i].a;
		}
		sort(ds+1,ds+n+1,cmp);
		ql(1,0,0);
		cout<<fp<<endl;
		//for(int i=1;i<=n;i++) cout<<ok[i]<<" ";
	}
}
