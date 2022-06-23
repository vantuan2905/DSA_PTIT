#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define m 1000000007
long long n,f[3][3]={{1,1},{1,0}},a[3][3]={{1,1},{1,0}};
void nhan(long long b[3][3],long long c[3][3]){
	long long d[3][3]={0};
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			for(int k=0;k<2;k++){
				d[i][j]+=b[i][k]*c[k][j]%m;d[i][j]%=m;
			}
		}
	}
	for(int i=0;i<2;i++) for(int j=0;j<2;j++) f[i][j]=d[i][j];
}
void lt(int n){
	if(n==1) return;
	lt(n/2);
	nhan(f,f);
	if(n%2==1) nhan(f,a);
}
main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n;f[0][0]=f[0][1]=f[1][0]=1;f[1][1]=0;
		if(n==0||n==1){
			cout<<n<<endl;continue;
		}
		lt(n-1);
		cout<<f[0][0]<<endl;
	}
}
