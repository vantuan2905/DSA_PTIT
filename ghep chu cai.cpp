#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int n,a[2000];string s="ABCDEFGHIJKLMNOPQRSTUVWXYZ"; int ok[200];char d;
int check(){ 
     if(s[n-1]<'E'){
     	if(s[a[0]]=='A'||s[a[n-1]]=='A') return 1;
     	return 0;
	 }
	if((s[a[0]]=='A'||s[a[0]]=='E')&&(s[a[n-1]]=='E'||s[a[n-1]]=='A')) return 1;
//	cout<<1;
	for(int i=0;i<n-1;i++){ //cout<<s[a[i]]<<"  "<<s[a[i+1]];
		if((s[a[i]]=='A'||s[a[i]]=='E')&&(s[a[i+1]]=='E'||s[a[i+1]]=='A')) return 1;
	}//cout<<endl;
	return 0;
}
void ql(int i){
	for(int j=0;j<n;j++){
		if(ok[j]==0){
			ok[j]=1;
			a[i]=j;
			if(i==n-1){
				if(check()){
				for(int x=0;x<n;x++){
					cout<<s[a[x]];
				}
				cout<<endl;
			}
			}else ql(i+1);
			ok[j]=0;
		}
	}
}
main(){
	int t;
	t=1;
	while(t--){
		cin>>d;n=0;
		for(int i=0;s[i]<=d;i++){
			a[i]=i;n++;
		}//cout<<endl;
		ql(0);
	}
}
