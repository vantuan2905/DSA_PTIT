#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int m=1e9+7;
long long n,k,f[200][200],a[200][200];
void nhan(long long aa[200][200],long long bb[200][200]){
	long long d[200][200]={0};
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			for(int x=0;x<n;x++){
				d[i][j]+=aa[i][x]*bb[x][j]%m;d[i][j]%=m;
			}
		}
	}
	for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				f[i][j]=d[i][j];
			}
		}
}
void lt(int r){
	if(r==1) return;
	lt(r/2);
	nhan(f,f);
	if(r%2==1) nhan(f,a);
}
main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n>>k;
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				cin>>a[i][j];f[i][j]=a[i][j];
			}
		}
		lt(k);
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				cout<<f[i][j]<<" ";
			}cout<<endl;
		}
	}
}
