#include<iostream>
#include<bits/stdc++.h>
using namespace std;int n,a[200000];int b[200000]={0};
int cmp(int x,int y){
	if(b[x]==b[y]) return x<y;
	return b[x]>b[y];
}
main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n;memset(b,0,sizeof(b));
		for(int i=0;i<n;i++){
			cin>>a[i];
			b[a[i]]++;
		}
		sort(a,a+n,cmp);
		for(int i=0;i<n;i++) cout<<a[i]<<" ";
		cout<<endl;
	}
}
