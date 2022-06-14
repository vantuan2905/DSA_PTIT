#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int n,k,s,a[2000];int cnt;
void ql(int i,int sum){
	
	if(sum==s&&i==k+1){
		//for(int x=1;x<=i;x++) cout<<a[x]<<" ";cout<<endl;
		cnt++;return;
	}
	if(i>k) return;
	for(int j=a[i-1]+1;j<=n;j++){
		if(sum+j<=s){a[i]=j;
			ql(i+1,sum+j);
		}else return;
	}
}
main(){
	int t;
	//cin>>t;
	while(2){cnt=0;
		cin>>n>>k>>s;
		if(n==k&&n==0&&n==s) break;
		a[0]=0;ql(1,0);
		cout<<cnt<<endl;
	}
}
