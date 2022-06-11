#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int n,k,a[2000],b[2000];set<int> s;
void ql(int i){
	for(int j=a[i-1]+1;j<=n-k+i;j++){
		a[i]=j;
		if(i==k){
			for(int x=1;x<=k;x++) cout<<b[a[x]-1]<<" ";
			cout<<endl;
		}else ql(i+1);
	}
}
main(){
	int t;
	t=1;
	while(t--){
		cin>>n>>k;
		for(int i=0;i<n;i++){
			int x;
			cin>>x;
			s.insert(x);
		}n=0;
		for(set<int>::iterator i=s.begin();i!=s.end();i++){
			b[n++]=*i;
		}
		ql(1);
	}
}
