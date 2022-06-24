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
			if(s[i]==']'){ string c="";
				while(st.size()&&st.top()!="["){
					c=st.top()+c;st.pop();
				}
				st.pop();
				string sl="";
				while(st.size()&&st.top()>="0"&&st.top()<="9"){
					sl=st.top()+sl;st.pop();
				}
				if(sl=="") sl="1";
				stringstream ss(sl);long long x=0;ss>>x;string cpy="";
				while(x--) cpy+=c;st.push(cpy);
			}else{
				st.push(string(1,s[i]));
			}
		}
		string kq="";
		while(st.size()){ kq=st.top()+kq;st.pop();}
		cout<<kq<<endl;
	}
}
