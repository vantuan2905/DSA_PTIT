#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int n,a[2000];
void ql(int i,int sum){
	if(sum==n){cout<<"(";
		for(int x=1;x<i-1;x++){
			cout<<a[x]<<" ";
		}
		cout<<a[i-1]<<") ";
	}
	for(int j=a[i-1];j>=1;j--){
		if(sum+j<=n){a[i]=j;
			ql(i+1,sum+j);
		}
	}
}
main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n;a[0]=n;
		ql(1,0);cout<<endl;
	}
}
