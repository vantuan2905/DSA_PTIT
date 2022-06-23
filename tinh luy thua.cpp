#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define m 1000000007
long long lt(long long n,long long k){
	if(k==0) return 1;
	long long x=lt(n,k/2);x%=m;
	if(k%2==1) return ((x*x)%m)*n%m;
	else return x*x%m;
}
main(){
	int t;
	
	while(1){
		long long n,k;
		cin>>n>>k;if(n==k&&k==0) break;
		cout<<lt(n,k)<<endl;
	}
}
