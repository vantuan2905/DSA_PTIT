#include<iostream>
#include<bits/stdc++.h>
using namespace std;
main(){
	int t;
	cin>>t;
	while(t--){
		int n,m,a[2000],b[2000];
		cin>>n>>m;int kt[5]={0};int d=0;
		for(int i=0;i<n;i++) cin>>a[i];
		for(int j=0;j<m;j++){ cin>>b[j];if(b[j]<5) kt[b[j]]++;}
		sort(b,b+m);
		for(int i=0;i<n;i++){
			if(a[i]==0){
				continue;
			}else{
				if(a[i]==1){
					d+=kt[0];
				}else{
					int x=(b+m)-lower_bound(b,b+m,a[i]);d+=x;d+=kt[0]+kt[1];
					if(a[i]==2){
						d-=(kt[3]+kt[4]);
					}else{
						if(a[i]==3) d+=kt[2];
					}
					
				}
			}
		}
		cout<<d<<endl;
	}
}
