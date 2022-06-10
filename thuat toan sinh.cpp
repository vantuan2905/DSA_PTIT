#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int n,a[20000];int ok=0;
void sinh(){
	int i=n-1;
	while(a[i]==1){
		a[i]=0;i--;
	}
	if(i==-1){
		ok=1;return;
	}
	a[i]++;
}
int dk(){
	int c=0,d=n-1;
	while(c<d){
		if(a[c]!=a[d]) return 0;
		c++;d--;
	}
	return 1;
}
main(){
	int t;
	t=1;
	while(t--){
		cin>>n;ok=0;
		for(int i=0;i<n;i++) a[i]=0;
		while(ok==0){
			if(dk()){
				for(int i=0;i<n;i++) cout<<a[i]<<" ";
				cout<<endl;
			}
			sinh();
		}
	}
}
