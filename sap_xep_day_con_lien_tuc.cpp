#include<iostream>
#include<bits/stdc++.h>
using namespace std;
main(){
	int t;
	cin>>t;
	while(t--){
		int n,a[1000005];
		cin>>n;int b[1000005];
		for(int i=0;i<n;i++){
			cin>>a[i];b[i]=a[i];
		}
		sort(a,a+n);
		int i=0,j=n-1;
		while(a[i]==b[i]){
			i++;
		}
		while(b[j]==a[j]) j--;
		cout<<i+1<<" "<<j+1<<endl;
	}
}
