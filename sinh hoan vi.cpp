n#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int n,a[20000];
void sinh(){
	int i=n-2;
	while(a[i]>a[i+1]&&i>=0) i--;
	//cout<<i<<endl;
	if(i==0-1){
		for(i=0;i<n;i++){
			a[i]=i+1;
		}return;
	}
	int j=n-1;
	while(a[j]<a[i]) j--;
	swap(a[i],a[j]);//cout<<j<<endl;
	reverse(a+i+1,a+n);
}
main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		for(int i=0;i<n;i++) cin>>a[i];
		sinh();
		for(int i=0;i<n;i++) cout<<a[i]<<" ";
		cout<<endl;
	}
}
