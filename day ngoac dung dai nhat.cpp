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
		st.push(-1);int f=-1;
		for(int i=0;i<s.length();i++){
			if(s[i]=='('){
				st.push(i);
			}else{
				st.pop();//f=max(f,i-st.top()+1);
				if(st.size()==0) st.push(i);
				else f=max(f,i-st.top());
			}
		}
		cout<<f<<endl;
	}
}
