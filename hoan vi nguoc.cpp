#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int n,a[20000];int ok;
void sinh(){
	int i=n-2;
	while(a[i]<a[i+1]&&i>=0){
		i--;
	}
	if(i==-1) ok=1;
	else{
		int j=n-1;
		while(a[j]>a[i]) j--;
		swap(a[i],a[j]);
		reverse(a+i+1,a+n);
	}
}
main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n;ok=0;
		for(int i=0;i<n;i++) a[i]=n-i;
		while(ok==0){
			for(int i=0;i<n;i++) cout<<a[i]<<"";
			cout<<" ";
			sinh();
		}
		cout<<endl;
	}
}
