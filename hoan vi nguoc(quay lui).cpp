#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int n,a[20000];int ok[2005];
void ql(int i){
	for(int j=n;j>=1;j--){
		if(ok[j]==0){
			ok[j]=1;
			a[i]=j;
			if(i==n-1){
				for(int x=0;x<n;x++) cout<<a[x];cout<<" ";
			}
			else ql(i+1);
			ok[j]=0;
		}
	}
}
main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n;
			ql(0);cout<<endl;	
	}
}
