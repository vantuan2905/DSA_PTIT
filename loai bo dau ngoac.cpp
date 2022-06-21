#include<iostream>
#include<bits/stdc++.h>
using namespace std;
string s; map<string,int> m;int f;
int kt(string a){
	if(a.size()<=1) return 0;
	stack<char> st;
	for(int i=0;i<a.length();i++){
		if(a[i]!='('&&a[i]!=')') continue;
		if(a[i]=='('){
			st.push(a[i]);
		}else{
			if(st.size()==0) return 0;
		    st.pop();
		}
	}
	if(st.size()==0) return 1;
	return 0;
}
void ql(string a,int pos){
	if(kt(a)){
		if(a.size()>f){
			f=a.size();
			m.clear();
			m[a]++;
		}else if(a.size()==f) m[a]++;
		return;
	}
	for(int i=pos;i<a.length();i++){
		string x=a;
		x.erase(x.begin()+i,x.begin()+i+1);
		ql(x,i);
	}
}
main(){
	int t;
	cin>>t;
	while(t--){m.clear();f=0;
		cin>>s;
		ql(s,0);
		if(m.size()==0) cout<<-1<<endl;
		for(map<string,int>::iterator i=m.begin();i!=m.end();i++) cout<<(*i).first<<" ";cout<<endl;
	}
}
