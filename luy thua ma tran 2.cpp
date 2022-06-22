#include<iostream>
#include<bits/stdc++.h>
using namespace std;

#define m 1000000007
long long a[20][20],f[20][20],n,k;
void tich(long long aa[20][20],long long bb[20][20]){ long long c[20][20]={0};
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			for(int x=0;x<n;x++){
				c[i][j]+=(aa[i][x]*bb[x][j])%m;c[i][j]%=m;
			}
		}
	}
	for(int i=0;i<n;i++) for(int j=0;j<n;j++) f[i][j]=c[i][j];
	//for(int i=0;i<n;i++){ for(int j=0;j<n;j++){ cout<<f[i][j]<<" ";} cout<<endl;}
	//cout<<endl;
}
void tinh(int r){
	if(r<=1) return;
	tinh(r/2);//cout<<1<<endl;
	tich(f,f);
	if(r%2==1) tich(f,a);
}
main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n>>k;
		for(int i=0;i<n;i++) for(int j=0;j<n;j++){ cin>>a[i][j];f[i][j]=a[i][j];}
		long long sum=0;
		tinh(k);
		//for(int i=0;i<n;i++){ for(int j=0;j<n;j++){ cout<<f[i][j]<<" ";} cout<<endl;}
		for(int i=0;i<n;i++){ sum+=f[i][n-1];sum%=m;}
		
		cout<<sum<<endl;
	}
}
