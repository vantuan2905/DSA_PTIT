#include<iostream>
#include<bits/stdc++.h>
using namespace std;
struct gt{
	int a,b;
};
main(){
	int t;
	cin>>t;
	while(t--){
		int c[2000]={0};
		int n,m,aa[2000],bb[2000];
		cin>>n>>m;int a1[200],b1[200];
		for(int i=0;i<n;i++){int x;cin>>x;
			a1[i]=x;
		}
		for(int i=0;i<m;i++){int x;cin>>x;
			b1[i]=x;
		}
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				c[i+j]+=a1[i]*b1[j];
			}
		}
		for(int i=0;i<n+m-1;i++) cout<<c[i]<<" ";
		cout<<endl;
	}
}
