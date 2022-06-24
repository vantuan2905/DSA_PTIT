#include<iostream>
#include<bits/stdc++.h>
using namespace std;
string s;
struct gt{
	int d,c;
};
vector<gt> v;vector<string> ans;int n,ok[2000];
void q(int i){
	for(int j=0;j<=1;j++){
		ok[v[i].d]=ok[v[i].c]=j;
		if(i==n-1){
			string ss="";
			for(int i=0;i<s.length();i++){
				if(s[i]!='('&&s[i]!=')'){
					ss+=s[i];continue;
				}
				if(ok[i]) ss+=s[i];
			}
			ans.push_back(ss);
		}else q(i+1);
	}
}
main(){
	int t=100;
	
	while(t--){
		stack<int> st;
		cin>>s;
		for(int i=0;i<s.length();i++){
			if(s[i]=='(') st.push(i);
			else{
				if(s[i]==')'){
					int j=st.top();st.pop();v.push_back({j,i});
				}
			}
		}
		n=v.size();
		q(0);
		sort(ans.begin(),ans.end());
		for(int i=0;i<ans.size();i++){
			if(ans[i]==s||(i!=0&&ans[i]==ans[i-1])) continue;
			cout<<ans[i]<<" \n";
		}//cout<<endl;
		break;
	}
}

