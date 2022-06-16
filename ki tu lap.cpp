#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int n;string s[2000];int f,ok[2000],a[2000];
int kt(string aa,string bb){
	int i=0,j=0,s=0;
	while(i<aa.length()&&j<bb.length()){
		if(aa[i]==bb[j]){
			s++;i++;j++;
		}else{
			if(aa[i]<bb[j]) i++;
			else j++;
		}
	}
	return s;
} int h;
void ql(int i){
	for(int j=1;j<=n;j++){
		//if(i==0) h=0;
		if(ok[j]==0){
			ok[j]=1;a[i]=j;
			 int t=kt(s[j],s[a[i-1]]);h+=t;
			if(i==n){
				//cout<<h<<endl;
				//if(h==0) for(int i=1;i<=n;i++)
				f=min(h,f);
			}else if(h<f) ql(i+1);
			ok[j]=0;h-=t;
		}
	}
}
main(){
	int t=1;
	//cin>>t;
	while(t--){f=1000000;
		cin>>n;
		for(int i=1;i<=n;i++) cin>>s[i];
		s[0]="123";
		ql(1);cout<<f<<endl;
	}
}
