#include<iostream>
#include<bits/stdc++.h>
using namespace std;
main(){
	int t;
	cin>>t;
	while(t--){
		int n,a[20000],k;
		cin>>n>>k;
		for(int i=0;i<n;i++) cin>>a[i];
		long long cnt=0;sort(a,a+n);
		for(int i=0;i<n;i++){
			int j=lower_bound(a+i+1,a+n,k+a[i])-(a+i+1);
			cnt+=j;			
		}
		cout<<cnt<<endl;
	}
}
