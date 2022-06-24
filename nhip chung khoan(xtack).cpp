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
		stack<int> st;int b[200000]={0};
		for(int i=0;i<n;i++){
			while(st.size()&&a[i]>=a[st.top()]) st.pop();
			if(st.size()==0) b[i]=i+1;
			else b[i]=i-st.top();
			cout<<b[i]<<" ";st.push(i);
		}
		
	}
}
