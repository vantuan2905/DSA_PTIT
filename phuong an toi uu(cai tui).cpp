#include<iostream>
#include<bits/stdc++.h>
using namespace std;
struct gt{
	int a,c;
};
int n;gt ds[2000];int f;int w;int ok[2000],okk[2000];
void ql(int i,int coin,int wei){
	
	if(i==n+1){
		if(coin>f){ f=coin;
			for(int j=1;j<=n;j++){
				okk[j]=ok[j];
			}
		}
		return;
	}
	if(wei+ds[i].a<=w){
	ok[i]=1;ql(i+1,coin+ds[i].c,wei+ds[i].a);}
	ok[i]=0;ql(i+1,coin,wei);
}
main(){
	cin>>n>>w;f=-1;
	for(int i=1;i<=n;i++){
		cin>>ds[i].c;
	}
	for(int i=1;i<=n;i++){
		cin>>ds[i].a;
	}
	ql(1,0,0);
	cout<<f<<endl;
	for(int i=1;i<=n;i++) cout<<okk[i]<<" ";
}
