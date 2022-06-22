#include<iostream>
#include<bits/stdc++.h>
using namespace std;
long long dao(long long n){
	int a[20]={0},i=0;long long kq=0;
	while(n>0){
		a[i++]=n%10;
		n/=10;
	}
	for(int j=0;j<i;j++){
		kq=kq*10+a[j];
	}
	return kq;
}
long m=1e9+7;
long long luythua(long long n,long long r){
	if(r==0) return 1;
	long long tmp=luythua(n,r/2);tmp%=m;
	if(r%2==1) return ((tmp*tmp)%m*n)%m;
	else return (tmp*tmp)%m;
}
main(){
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		long long r=dao(n);//cout<<r<<endl;
		long long x=luythua(n,r);cout<<x<<endl;
	}
}
