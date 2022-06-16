#include<iostream>
#include<bits/stdc++.h>
using namespace std;
string s;int n,k;int a[20];int kt;set<string> se;
int check(string s){
	if(s[0]=='0'||s[5]=='0') return 0;
	char x=s[3];
	int a=((s[0]-'0')*10)+(s[1]-'0'),b=((s[5]-'0')*10)+(s[6]-'0'),c=((s[10]-'0')*10)+(s[11]-'0');
	if(a<10||b<10||c<10) return 0;
	if(x=='+'){
		if(a+b==c) return 1;
		return 0;
	}
	if(x=='-'){
		if(a-b==c) return 1;
		return 0;
	}
	return 0;
}
void ql(int i){
	if(i>n){
//		cout<<s;kt=1;return;
	}
    if(kt==1||i>n) return;
	for(int j=0;j<=9;j++){
		s[a[i]]=j+'0';
		if(i==n){
			if(check(s)){kt=1;cout<<s;}
		}else ql(i+1);
	}
}
main(){
	int t;
	cin>>t;cin.ignore();
	while(t--){se.clear();
		k=0;n=0;kt=0;
		getline(cin,s);
		for(int i=0;i<s.length();i++){
			if(s[i]=='?'&&i!=3&&i!=8){ k++;a[k]=i;
		}
		}n=k;
		s[8]='=';
		if(n==0) if(check(s)){cout<<s; kt=1;}
		if(s[3]=='?'){
			string x=s;
			s[3]='+';	if(n==0) if(check(s)){cout<<s; kt=1;}
			ql(1);
			s[3]='-';	if(n==0) if(check(s)){cout<<s; kt=1;}
			ql(1);
		}else if(s[3]!='*'&&s[3]!='/'&&n>0) ql(1);	
		if(kt==0) cout<<"WRONG PROBLEM!";cout<<endl;
	}
}

