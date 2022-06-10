#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int n,a[2000];int k;
int dk(){ int cnt=0;
	for(int i=1;i<=n;i++) cnt+=a[i];//cout<<" "<<cnt<<" ";
	if(cnt==k) return 1;
	return 0;
}
void ql(int i){
	for(int j=0;j<=1;j++){
		a[i]=j;
		if(i==n){
			if(dk()==1){
			for(int x=1;x<=n;x++){
				cout<<a[x];
			} 
			cout<<" \n";}
		}else ql(i+1);
	}
}
main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n>>k;
		ql(1);//cout<<endl;
	}
}
