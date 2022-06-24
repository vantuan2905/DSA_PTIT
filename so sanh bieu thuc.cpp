#include<iostream>
#include<bits/stdc++.h>
using namespace std;
string xuli(string s){
	stack<int> st;string sk="";
	for(int i=0;i<s.length();i++){
		if(s[i]=='(') st.push(i);
		else{
			if(s[i]==')'){
				int j=st.top();st.pop();
				if(j==0||s[j-1]!='-') continue;
				for(int x=j;x<i;x++){
					if(s[x]=='+') s[x]='-';
					else if(s[x]=='-') s[x]='+';
				}
			}
		}
	}
	for(int i=0;i<s.length();i++) if(s[i]!='('&&s[i]!=')') sk+=s[i];
	return sk;
}
main(){
	int t;
	cin>>t;
	while(t--){
		string a,b;
		cin>>a>>b;
		a=xuli(a);b=xuli(b);//cout<<a<<" "<<b<<endl;
		if(a==b) cout<<"YES\n";else cout<<"NO\n";
	}
}
