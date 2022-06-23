#include<iostream>
#include<bits/stdc++.h>
using namespace std;
main(){
	int t;
	cin>>t;
	while(t--){
		string s;int cnt=0;
		cin>>s;stack<char> st;
		for(int i=0;i<s.length();i++){
			if(s[i]==')'){
				if(st.size()==0){ cnt++;st.push('(');}
				else st.pop();
			}else st.push(s[i]);
		}
		if(st.size()!=0) cnt+=st.size()/2;
		cout<<cnt<<endl;
	}
}
