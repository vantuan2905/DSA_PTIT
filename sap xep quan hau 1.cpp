#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int n,c[200],d1[200],d2[200];int d,a[2000];
void ql(int i){
	for(int j=1;j<=n;j++){
		if(c[j]==0&&d1[i-j+n]==0&&d2[i+j-1]==0){
			c[j]=d1[i-j+n]=d2[i+j-1]=1;
			a[i]=j;
			if(i==n) d++;
			else ql(i+1);
			c[j]=d1[i-j+n]=d2[i+j-1]=0;
		}
	}
}
main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n;d=0;
		ql(1);cout<<d<<endl;
	}
}
