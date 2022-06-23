#include<iostream>
#include<bits/stdc++.h>
using namespace std;
long long f[3][3],a[3][3]={{1,1},{1,0}};int m=1e9+7;
void tich(long long b[3][3],long long c[3][3]){
	long long d[3][3]={0};
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			for(int k=0;k<2;k++){
				d[i][j]+=b[i][k]*c[k][j];d[i][j]%=m;
			}
		}
	}
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			f[i][j]=d[i][j];
		}
	}
}
void lt(int n){
	if(n==1) return;
	lt(n/2);
	tich(f,f);
	if(n%2==1) tich(f,a);
}
main(){
	int t;
	cin>>t;
	while(t--){
		int n;f[0][0]=f[0][1]=f[1][0]=1;f[1][1]=0;
		cin>>n;
		if(n==0||n==1){
			cout<<n<<endl;continue;
		}
		lt(n);
		cout<<f[1][0]<<endl;
	}
}
