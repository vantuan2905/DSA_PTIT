#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int n,a[20000];int ok[20000];int c;
void sinh(){
	int i=n-1;
	while(a[i]>a[i+1]){
		i--;
	}//cout<<i<<endl;
	if(i==0) c=1;
	else{
		int j=n;
		while(a[j]<a[i]) j--;
		swap(a[i],a[j]);
		reverse(a+i+1,a+n+1);
	}
}
main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n;c=0;
		for(int i=1;i<=n;i++) cin>>a[i];sort(a,a+n);
		while(c==0){//sinh();
			for(int i=1;i<=n;i++) cout<<a[i]<<" ";
			cout<<endl;
			sinh();//break;
		}
	}
}
