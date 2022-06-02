#include<iostream>
#include<bits/stdc++.h>
using namespace std;
main(){
	int t;
	cin>>t;
	while(t--){
		int m,n,a[20000],b[20000];vector<int> u,ii;
		cin>>m>>n;
		for(int i=0;i<m;i++){
			cin>>a[i];
		}
		for(int j=0;j<n;j++) cin>>b[j];
		int i=0,j=0;sort(a,a+m);sort(b,b+n);
		while(i<m&&j<n){
			if(a[i]==b[j]){ u.push_back(a[i]);
				ii.push_back(a[i]);i++;j++;
			}else{
				if(a[i]<b[j]){
					u.push_back(a[i]);i++;
				}else{
					u.push_back(b[j]);j++;
				}
			}
			while(i==m&&j<n){
				u.push_back(b[j]);j++;
			}
			while(i<m&&j==n){
				u.push_back(a[i]);i++;
			}
		}
		//sort(u.begin(),u.end());sort(ii.begin(),ii.end());
		for(int k=0;k<u.size();k++) cout<<u[k]<<" ";
		cout<<endl;
			for(int k=0;k<ii.size();k++) cout<<ii[k]<<" ";
		cout<<endl;
	}
}
