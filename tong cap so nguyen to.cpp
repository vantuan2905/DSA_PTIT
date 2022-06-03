#include<iostream>
#include<bits/stdc++.h>
using namespace std;
main(){
	int t;
	cin>>t;
	//int a[1000005];
	
	while(t--){int n;
		int ok[1000005]={0};ok[0]=ok[1]=1;
	for(int i=2;i<=sqrt(n);i++){
		if(ok[i]==0){
			for(int j=i*2;j<=n;j+=i){
				ok[j]=1;
			}
		}
	}
		cin>>n;int k=0;
		for(int i=2;i<=n/2;i++){
			if(ok[i]==0&&ok[n-i]==0){
				cout<<i<<" "<<n-i<<endl;k=-1;break;
			}
		}
		if(k==0) cout<<-1<<endl;
	}
}
