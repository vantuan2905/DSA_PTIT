#include<iostream>
#include<bits/stdc++.h>
using namespace std;
main(){
	int t;
	cin>>t;
	while(t--){
		long long n,a[20000];
		cin>>n;
		for(int i=0;i<n;i++) cin>>a[i];
		long long b[200000],c[200000];stack<int> st;
		for(int i=0;i<n;i++){
			while(st.size()&&a[i]<=a[st.top()]) st.pop();
			
			if(st.size()==0) b[i]=-1;
			else b[i]=st.top();st.push(i);
		}
		while(st.size()) st.pop();
		for(int i=n-1;i>=0;i--){
			while(st.size()&&a[i]<=a[st.top()]) st.pop();
			if(st.size()==0) c[i]=n;
			else c[i]=st.top();st.push(i);
		}
		long long f=0;
		for(int i=0;i<n;i++){//cout<<b[i]<<" "<<c[i]<<"    ";
			f=max(f,(c[i]-b[i]-1)*a[i]);
		}
		cout<<f<<endl;
	}
}
