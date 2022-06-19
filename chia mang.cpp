#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int n,k,a[2000];int sum,ok[1200],cnt;
void ql(int i,int s){
	if(cnt==1) return;
	if(s==sum&&i!=k){
	//for(int x=0;x<n;x++) cout<<ok[x]<<" - ";
	//cout<<endl;
	 ql(i+1,0);return;}
	if(s==sum&&i==k){//cout<<i<<endl;
		cnt=1;return;
	}
	for(int j=0;j<n;j++){
		if(ok[j]==0){
			if(s+a[j]<=sum){
				ok[j]=1;//cout<<i<<"  "<<s+a[j]<<endl;
				ql(i,s+a[j]);
				ok[j]=0;
			}
		}
	}
}
main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n>>k;sum=0;cnt=0;
		for(int i=0;i<n;i++){ cin>>a[i];sum+=a[i];}
		if(sum%k==0){ sum/=k;//cout<<sum<<endl;
			ql(1,0);
			if(cnt) cout<<cnt<<endl;
			else cout<<0<<endl;
		}else cout<<0<<endl;
		
	}
}
