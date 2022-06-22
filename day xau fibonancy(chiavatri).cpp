#include<iostream>
#include<bits/stdc++.h>
using namespace std;
main(){
	int t;long long f[200]={0};
	f[0]=1;f[1]=1;f[2]=f[1];
	for(int i=3;i<=93;i++) f[i]=f[i-1]+f[i-2];
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		while(1){
			if(n==2){ cout<<"B"<<endl;break;}
			if(n==1){
				cout<<"A"<<endl;
				break;
			}
			if(k<=f[n-2]){
				n=n-2;
			}else{
				k=k-f[n-2];n=n-1;
			}
		}
	}
}
