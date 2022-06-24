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
		int b[20000],c[20000];
		stack<int> st1,st2;
		for(int i=n-1;i>=0;i--){
			while(st1.size()&&a[i]>=a[st1.top()]){ st1.pop();}
			//cout<<a[i]<<"  ";if(st1.size()) cout<<st1.top();cout<<endl;
			
			if(st1.size()==0) b[i]=-1;
			else{ b[i]=st1.top();}
			st1.push(i);
		}
		for(int i=n-1;i>=0;i--){
			while(st2.size()&&a[i]<=st2.top()) st2.pop();
			
			if(st2.size()==0) c[i]=-1;
			else c[i]=st2.top();
			st2.push(a[i]);
		}
		for(int i=0;i<n;i++){
			if(b[i]==-1) cout<<-1<<" ";
			else cout<<c[b[i]]<<" ";
		}
		cout<<endl;
	}
}
