#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int ck(char a,char b){
	if(a=='('&&b==')') return 1;
	return 0;
}
main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		stack<char> st;int cnt=0;
		for(int i=0;i<s.length();i++){
			if(s[i]=='(') st.push(s[i]);
			else{
				if(st.size()==0) continue;
				if(ck(st.top(),s[i])){
					st.pop();
					cnt+=2;
					
				}
			}
		}
		cout<<cnt<<endl;
	}
}
