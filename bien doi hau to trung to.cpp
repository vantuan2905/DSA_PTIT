#include<iostream>
#include<bits/stdc++.h>
using namespace std;
main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		stack<string> st;
		for(int i=0;i<s.length();i++){
			if(s[i]!='+'&&s[i]!='-'&&s[i]!='*'&&s[i]!='/') st.push(string( 1,s[i]));
			else{
				string a=st.top();st.pop();string b=st.top();st.pop();
				if(s[i]=='+'||1){
					string kq="("+b+s[i]+a+")";st.push(kq);
				}
			}
		}
		cout<<st.top()<<endl;
	}
}
