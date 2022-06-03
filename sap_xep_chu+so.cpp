#include<iostream>
#include<bits/stdc++.h>
using namespace std;
main(){
	int t;
	cin>>t;
	while(t--){
		long long n,a[1005];set<int> st;
		cin>>n;
		for(int i=0;i<n;i++){
			cin>>a[i];
			while(a[i]>0){
				st.insert(a[i]%10);
				a[i]/=10;
			}
		}
		for(set<int>::iterator i=st.begin();i!=st.end();i++){
			cout<<*i<<" ";
		}
		cout<<endl;
	}
}
