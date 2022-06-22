#include<iostream>
#include<bits/stdc++.h>
using namespace std;
long long m=1e9+7;
long long luythua(long long n,long long k){
	if(k==0) return 1;
	//if(k==1) return n;
	long long tmp=luythua(n,k/2);tmp%=m;
	if(k%2==1) return ((tmp*tmp)%m*n)%m;
	else return (tmp*tmp)%m;
}
main(){
	int t;
	cin>>t;
	while(t--){long long n,k;
		cin>>n>>k;
		long long x=luythua(n,k);
		cout<<x<<"\n";
	}
}
