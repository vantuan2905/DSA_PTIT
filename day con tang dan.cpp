#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int n,a[2000];int b[200];vector<string > v;
void ql(int i){
	for(int j=b[i-1]+1;j<=n;j++){
		if(a[j]>a[b[i-1]]){
			b[i]=j;vector<int> c;string s;
			for(int x=1;x<=i&&i>1;x++){
				s+=to_string(a[b[x]])+" ";
			}
			if(i>1 ) v.push_back(s);
			ql(i+1);
		}
	}
}
main(){
	int t;
	t=1;
	while(t--){
		cin>>n;//memset(v,0,sizeof(v));
		for(int i=1;i<=n;i++) cin>>a[i];
		ql(1);
        sort(v.begin(),v.end());
		for(int i=0;i<v.size();i++){
			cout<<v[i]<<" \n";
		}//cout<<endl;
	}
}
