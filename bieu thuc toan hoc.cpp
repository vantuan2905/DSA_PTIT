#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int n,a[20],b[20];
int d,kt;int ok[200];
void tih(int i,int kq){
	if(kt==1) return;
	if(i==4){ //cout<<kq<<endl;
		if(kq==23){ kt=1;
		return;
		}
	}else{
		tih(i+1,kq+a[b[i+1]]);
		tih(i+1,kq-a[b[i+1]]);
		tih(i+1,kq*a[b[i+1]]);
	}
}
void ql(int i){
	if(kt==1) return;
	for(int j=0;j<5;j++){
		if(ok[j]==0){ //cout<<i<<"  ";
			ok[j]=1;b[i]=j;
			if(i==5-1){ //cout<<1;
				tih(0,a[b[0]]);
			}else ql(i+1);
			ok[j]=0;
		}
	}
}
main(){
	int t;
	cin>>t;
	while(t--){
		for(int i=0;i<5;i++) cin>>a[i];
		ql(0);
		if(kt) cout<<"YES\n";
		else cout<<"NO"<<endl;kt=0;
	}
}
