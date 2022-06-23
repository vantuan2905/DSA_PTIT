#include<iostream>
#include<bits/stdc++.h>
using namespace std;
main(){
	int t;
	cin>>t;cin.ignore();
	while(t--){
		string s;getline(cin,s);
		stack<char> st; int kt=1;
		for(int i=0;i<s.length();i++){
			if(s[i]==')'){int k=1;
				while(st.top()!='('){
					if(st.top()=='+'||st.top()=='-'||st.top()=='*'||st.top()=='/') k=0;
					st.pop();
				}
				if(k==1){
					kt=0;break;
				}
				st.pop();
			}else st.push(s[i]);
		}
		if(kt==0) cout<<"Yes\n";else cout<<"No\n";
	}
}
