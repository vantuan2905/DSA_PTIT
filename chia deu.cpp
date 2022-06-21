#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int n,k,a[2000],s,cnt,ok[2000],b[200],c[200];vector<int> ds[100];
void ql(int i,int sum,int t){
	if(i==n)
	if(t==k) cnt++;
	if(t>k) return; 
	for(int j=i;j<n;j++){
		sum+=a[j];
		if(sum==s) ql(j+1,0,t+1);
	}
}
main(){
	int t;
	t=1;
	while(t--){
		cin>>n>>k;s=0;
		for(int i=0;i<n;i++){
			cin>>a[i];
			s+=a[i];
		}
		if(s%k==0){
			s=s/k;//cout<<s<<endl;
			b[0]=-1;
			ql(0,0,0);
			cout<<cnt<<endl;
		}
		else cout<<0<<endl;
	}
}
