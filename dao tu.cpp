#include<iostream>
#include<bits/stdc++.h>
using namespace std;
main(){
	int t;
	cin>>t;cin.ignore();
	while(t--){
		string s;
		getline(cin,s);
		stringstream ss(s);
		string tmp;stack<string> st;
		while(ss>>tmp){
			st.push(tmp);
		}
		while(st.empty()==0){
			cout<<st.top()<<" ";st.pop();
		}
		cout<<endl;
	}
}
