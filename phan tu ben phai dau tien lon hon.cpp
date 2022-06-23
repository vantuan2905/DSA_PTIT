#include<iostream>
#include<bits/stdc++.h>
using namespace std;
main(){
	int t;
	cin>>t;
	while(t--){
		int n,a[20000];
		cin>>n;
		for(int i=0;i<n;i++) cin>>a[i];
		int b[20000];
		stack<int> st;
		for(int i=n;i>=0;i--){
			while(st.size()!=0&&a[i]>=a[st.top()]) st.pop();
			if(st.size()==0) b[i]=-1;
			else b[i]=st.top();
			st.push(i);
		}
		for(int i=0;i<n;i++){
			if(b[i]!=-1) cout<<a[b[i]]<<" ";
			else cout<<-1<<" ";
		}cout<<endl;
	}
}
