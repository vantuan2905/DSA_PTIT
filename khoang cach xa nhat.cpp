#include<iostream>
#include<bits/stdc++.h>
using namespace std;
main(){
	int t;
	cin>>t;
	while(t--){
		int n,a[200000];int c[200000]={0};
		cin>>n;
		for(int i=0;i<n;i++){ cin>>a[i];}
		for(int i=n-1;i>=0;i--){
		     if(i!=n-1)	c[i]=max(c[i+1],a[i]);else c[i]=a[i];
		    // cout<<c[i]<<"  ";
		}//cout<<endl;
		int cnt=0;int j=1;
		for(int i=0;i<n;i++){
			//int j=i+1;
			while(a[i]<c[j]) j++;
			//cout<<i<<"  "<<j<<endl;
			cnt=max(cnt,j-i-1);
		}
	if(cnt!=0)	cout<<cnt<<endl;else cout<<-1<<endl;
	}
}
