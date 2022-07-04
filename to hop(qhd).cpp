#include<iostream>
#include<bits/stdc++.h>
using namespace std;
main(){
	int t;int m=1e9+7;
	cin>>t;
	long long c[10005][10005];
	for(int i=0;i<=10000;i++){//n
		for(int j=0;j<=10000;j++){//k
			if(i<j) continue;
			if(j==1) c[i][j]=i;
			if(i==j||j==0) c[i][j]=1;
			else{if(j!=1)
				c[i][j]=(c[i-1][j-1]%m+c[i-1][j]%m)%m;
			}
			//cout<<i<<" "<<j<<" "<<c[i][j]<<endl;
		}
	}
	while(t--){
		int n,k;
		cin>>n>>k;
		cout<<c[n][k]<<endl;
	}
}
