#include<iostream>
#include<bits/stdc++.h>
using namespace std;
// dem day so co tong bang n  --> tinh luy thua 2^n
long long m=123456789;
long long luythua(long long n, long long k){
	if(k==0) return 1;
	long long x=luythua(n,k/2);x%=m;
	if(k%2==1) return ((x*x)%m)*n%m;
	else return x*x%m;
}
main(){
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		cout<<luythua(2,n-1)<<endl;
	}
}
