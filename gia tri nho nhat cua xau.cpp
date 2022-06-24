#include<iostream>
#include<bits/stdc++.h>
using namespace std;
main(){
	int t;
	cin>>t;
	while(t--){
		int k;string s;map<char,int> m;
		cin>>k>>s;
		for(int i=0;i<s.length();i++){
			m[s[i]]++;
		}
		priority_queue<long long> q;
		for(map<char,int>::iterator i=m.begin();i!=m.end();i++){
			q.push((*i).second);
		}
		while(k--){
			int x=q.top();
			q.pop();
			x--;q.push(x);
		}long long x=0;
		while(q.size()){
			x+=q.top()*q.top();q.pop();
		}
		cout<<x<<endl;
	}
}
