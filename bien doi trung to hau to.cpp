#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int pri(char s){
	if(s=='^') return 4;
	if(s=='*'||s=='/') return 3;
	if(s=='+'||s=='-') return 2;
	return 1;
}
main(){
	int t;
	cin>>t;
	while(t--){
		string s,res="";stack<char> st;
		cin>>s;
		for(int i=0;i<s.length();i++){
			if(s[i]>='A'&&s[i]<='Z'){ res+=s[i];continue;}
			if(s[i]>='a'&&s[i]<='z'){ res+=s[i];continue;}
			if(s[i]=='(') st.push(s[i]);
			else{
				if(s[i]==')'){
					while(st.size()&&st.top()!='('){
						res+=st.top();st.pop();
					}
					st.pop();
				}else{
					while(st.size()&&st.top()!='('&&pri(st.top())>pri(s[i])){
						res+=st.top();st.pop();
					}
					st.push(s[i]);
				}
			}	
					
		}
		while(st.size()&&st.top()!='('){
				res+=st.top();st.pop();
			}
			cout<<res<<endl;
	}
}
