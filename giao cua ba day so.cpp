#include<iostream>
#include<bits/stdc++.h>
using namespace std;
main(){
	int t;
	cin>>t;
	while(t--){
		long long n,a[1000005];int kt=-1;
		long long m,k,b[1000005],c[1000005];
		cin>>n>>m>>k;
		for(int i=0;i<n;i++) cin>>a[i];
		for(int i=0;i<m;i++) cin>>b[i];
		for(int i=0;i<k;i++) cin>>c[i];
		int i=0,j=0,h=0;
		while(i<n&&j<m&&h<k){
			if(a[i]==b[j]&&b[j]==c[h]){
				cout<<a[i]<<" ";i++;j++;h++;kt=1;
			}
			else{
				if(a[i]>b[j]) j++;
				else if(b[j]>c[h]) h++;
				else i++;
			}
		}
		if(kt==-1) cout<<kt<<endl;
		cout<<endl;
	}
}
