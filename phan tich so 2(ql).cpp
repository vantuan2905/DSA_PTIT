#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int n,a[2000],b[2000];vector<vector<int> > v;
void ql(int i,int sum){
	for(int j=b[i-1];j>=1;j--){
		b[i]=j;
		if(sum+j==n){vector<int> vv;
			for(int x=1;x<=i;x++) vv.push_back(b[x]);
			v.push_back(vv);
		}else if(sum+j<=n) ql(i+1,sum+j);
	}
}
main(){
	int t;
	cin>>t;
	while(t--){v.clear();
		cin>>n;a[0]=n;b[0]=n;
		ql(1,0);
		cout<<v.size()<<endl;
		for(int i=0;i<v.size();i++){
			cout<<"("<<v[i][0];
			for(int j=1;j<v[i].size();j++) cout<<" "<<v[i][j];
			cout<<") ";
		}cout<<endl;
	}
}
