#include<iostream>
#include<bits/stdc++.h>
using namespace std;
main(){
	int t;
	cin>>t;
	while(t--){
		int n,a[2000];int k;map<int,int> m;
		cin>>n>>k;
		for(int i=0;i<n;i++){ cin>>a[i];m[a[i]]++;} int cnt=0;
		for(int i=0;i<n;i++){
		    if(a[i]!=k-a[i])	cnt+=m[k-a[i]];
		    else cnt+=(m[k-a[i]]-1);
			m[a[i]]--;
		}		
		cout<<cnt<<endl;
	}
}
