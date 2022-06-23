#include<iostream>
#include<bits/stdc++.h>
using namespace std;
main(){
	int t;
	cin>>t;
	while(t--){
		int k;string a,b;
		cin>>k>>b>>a;
		while(a.length()<b.length()){
			a="0"+a;
		}
		while(a.length()>b.length()){
			b="0"+b;
		} string kq="";int nho=0;
		for(int i=a.length()-1;i>=0;i--){
			int tmp=(a[i]-'0')+(b[i]-'0')+nho;nho=tmp/k;//;tmp%=k;
		//	cout<<tmp<<"  "<<nho<<endl;
			kq.push_back(tmp%k+'0');
			
		}
		while(nho>0){
			kq.push_back(nho%k+'0');nho/=10;
		}
		reverse(kq.begin(),kq.end());cout<<kq<<endl;
	}
}
