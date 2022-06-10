#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int n,a[20000];int k;
void sinh(){
	int i=k-1;
	while(a[i]==n-k+i+1) i--;
	if(i==-1){
		for(int j=1;j<=k;j++) a[j-1]=j;
		return;
	}
	a[i]++;
	for(int j=i+1;j<k;j++) a[j]=a[j-1]+1;
}
main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n>>k;
		for(int i=0;i<k;i++) cin>>a[i];
		sinh();
		for(int i=0;i<k;i++) cout<<a[i]<<" ";cout<<endl;
	}
}

