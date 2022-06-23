#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int check(char a,char b){
	if(a=='['&&b==']') return 1;
	if(a=='('&&b==')') return 1;
	if(a=='{'&&b=='}') return 1;
	return 0;
}
main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;int kt=1;stack<char> st;
		for(int i=0;i<s.length();i++){
			if(s[i]==')'||s[i]==']'||s[i]=='}'){
				if(check(st.top(),s[i])==0){
					kt=0;break;
				}else st.pop();
			}else st.push(s[i]);
		}
		if(kt) cout<<"YES\n";
		else cout<<"NO\n";
	}
}
