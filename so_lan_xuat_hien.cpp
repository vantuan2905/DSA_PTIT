#include<iostream>
#include<bits/stdc++.h>
using namespace std;
main(){
	int t;
	cin>>t;
	while(t--){
		int n,a[20000],x;map<int,int> m; 
		cin>>n>>x;
		for(int i=0;i<n;i++){
			cin>>a[i];m[a[i]]++;
		}
		if(m[x]>0) cout<<m[x]<<endl;
		else cout<<-1<<endl;
	}
}
