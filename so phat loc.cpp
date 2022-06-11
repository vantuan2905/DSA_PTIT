#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int n,a[20000];
int check(){
	if(a[1]!=8||a[n]!=6) return 0;
	for(int i=1;i<=n;i++){
		if(i<=n-1&&a[i]==a[i+1]&&a[i]==8) return 0;
		if(i<=n-3&&a[i+2]==a[i+3]&&a[i]==a[i+1]&&a[i+1]==a[i+2]&&a[i]==6) return 0;
	}
	return 1;
}
void ql(int i){
	for(int j=6;j<=8;j+=2){
		a[i]=j;
		if(i==n){
		//	for(int x=1;x<=n;x++) cout<<a[x];cout<<endl;
			if(check()){
				for(int x=1;x<=n;x++) cout<<a[x];cout<<endl;
			}
		}else ql(i+1);
	}
}
main(){
      int t=1;
	//cin>>t;
	while(t--){
		cin>>n;
		ql(1);
	}
}
