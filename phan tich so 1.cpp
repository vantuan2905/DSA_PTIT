#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int n,a[2000],cnt;int ok;
void sinh(){
	int i=cnt;
	while(a[i]==1&&i>=1) i--;
	if(i==0){
		ok=1;
	}else{
		a[i]--;
		int du=cnt-i+1;cnt=i;int d=du/a[i],r=du%a[i];
		for(int x=1;x<=d;x++) a[++cnt]=a[i];
		if(r!=0) a[++cnt]=r;
	}
}
main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n;ok=0;a[1]=n;cnt=1;
		
		while(ok==0){
			cout<<"(";//ok++;
			for(int i=1;i<cnt;i++) cout<<a[i]<<" ";cout<<a[cnt]<<") ";
			sinh();
		}cout<<endl;5
	}
}
