#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int m[6];vector<int> v;
void ql(int i){
	v.push_back(i);
	for(int j=0;j<=5;j++){
		if(m[j]==0){
			m[j]=1;
			ql(i*10+j);
			m[j]=0;
		}
	}
}
main(){
	int t;
	for(int i=1;i<=5;i++){
		m[i]=1;
		ql(i);
		m[i]=0;
	}
	cin>>t;sort(v.begin(),v.end());
	while(t--){int l,r;
		cin>>l>>r;
		int k1=lower_bound(v.begin(),v.end(),l)-v.begin();
		int k2=lower_bound(v.begin(),v.end(),r)-v.begin();
		if(v[k2]!=r) k2--;
		cout<<k2-k1+1<<endl;
	}
}
