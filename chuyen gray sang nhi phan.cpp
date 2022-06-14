#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int n,a[2000];
main(){
	int t;
	cin>>t;
	while(t--){
	//	cin>>n;
		string s;
		cin>>s;string x="";
		for(int i=0;i<s.length();i++){//x.push_back(1);
		
			if(i==0){ x.push_back(s[i]);}
			else{
				if(x[i-1]!=s[i]) x.push_back('1');
				else x.push_back('0');
				//cout<<x<<endl;
			}
		}
		cout<<x<<endl;
	}
}
