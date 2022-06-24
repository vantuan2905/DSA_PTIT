#include<iostream>
#include<bits/stdc++.h>
using namespace std;
main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		stack<int> st;
		for(int i=0;i<=s.length();i++){
			st.push(i+1);
			if(s[i]=='I'||i==s.length()){///cout<<1;
				while(st.size()){
					cout<<st.top()<<"";st.pop();
				}
			}
		}
		cout<<endl;
	}
}
