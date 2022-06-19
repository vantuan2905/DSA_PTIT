#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int n,k,a[2000];
void sinh(){
	int i=k-1;
	while(a[i]==a[i+1]-1){
		i--;
	}
	if(i==0&&a[i]==1){
		for(int j=1;j<=k;j++) a[j]=n-k+j;
	}else{ i++;
		a[i]--;
		for(int j=i+1;j<=k;j++) a[j]=n-k+j;
	}
}
main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n>>k;
		for(int i=1;i<=k;i++) cin>>a[i];
		sinh();
		for(int j=1;j<=k;j++) cout<<a[j]<<' ';
		cout<<endl;
	}
}
