#include<iostream>
#include<bits/stdc++.h>
using namespace std;
main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		stack<int> st;
		cin>>s;
		for(int i=0;i<s.length();i++){
			if(s[i]=='(') st.push(i);
			else{
				if(s[i]==')'){
					int j=st.top();st.pop();//cout<<j<<endl;
					if(s[j-1]!='-') continue;
					//cout<<j<<"  "<<i<<endl;
					for(int x=j;x<i;x++){//cout<<s[x]<<" ";
						if(s[x]=='+') s[x]='-';else
						if(s[x]=='-') s[x]='+';
						//cout<<s[x]<<"   .  ";
					}//cout<<endl;
				}
			}
		}
		for(int i=0;i<s.length();i++) if(s[i]!='('&&s[i]!=')') cout<<s[i];cout<<endl;
	}
}
