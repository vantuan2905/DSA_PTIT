#include<iostream>
#include<bits/stdc++.h>
using namespace std;
main(){
	string s,a="push",b="pop",c="show";int n;stack<int> st;
	while(cin>>s){
		if(s==a){
			cin>>n;
			st.push(n);
		}
		else{
			if(s==b){
				if(st.empty()==0) st.pop();
			}else{
				stack<int> stt;
				if(st.empty()==1) cout<<"empty"<<endl;
				else{
					while(st.empty()==0){
						int x=st.top();
						stt.push(x);st.pop();
					}
					while(stt.empty()==0){
						int x=stt.top();cout<<x<<" ";
						st.push(x);stt.pop();
					}
					cout<<endl;
				}
			}
		}
	}
}
